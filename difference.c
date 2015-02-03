#include <stdio.h>
#define MAX 1000

main(){
  int v1[MAX];
  int v2[MAX];
  int diff[MAX];
  int n,m;
  do{
    printf("Lunghezza prima sequenza?");
    scanf("%d", &n);
  }while(n<1||n>MAX);
  leggi_array(v1, n);
  do{
    printf("Lunghezza seconda sequenza?");
    scanf("%d", &m);
  }while(m<1||m>MAX);
  leggi_array(v2, m);
    //differenza 1
    int trovato=0, i=0, j=0, k=0;
    while(i<n){
        j=0;
        while(trovato==0 && j<m){
            if(v1[i]==v2[j]){
                trovato=1;
            }
            j++;
        }
        if(trovato==0){
            diff[k]=v1[i];
            k++;
        }else{
            trovato=0;
        }
     i++;
    }
    trovato=0; i=0; j=0;
    while(j<m){
        i=0;
        while(trovato==0 && i<n){
            if(v1[i]==v2[j]){
                trovato=1;
            }
            i++;
        }
        if(trovato==0){
            diff[k]=v2[j];
            k++;
        }else{
            trovato=0;
        }
     j++;
    }
    stampa_sequenza(diff, k);
}
void leggi_array(int a[] , int l){
  int i;
  for(i=0;i<l;i++){
    printf("Inserisci l'elemento della sequenza [%d]:", i);
    scanf("%d", &a[i]);
  }
}
void stampa_sequenza(int a[], int l){
    int i;
    for(i=0; i<l; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}
