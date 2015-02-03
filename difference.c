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
  
    //calcolo la differenza e la metto su un array unico.
    //NB: devo calcolare in realtà 2 differenze: v1/v2 e v2/v1!
    
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
