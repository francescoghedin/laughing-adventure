//merge two sorted sequences using a third sequence
#include <stdio.h>
#define MAX 1000

main(){
  int v1[MAX];
  int v2[MAX];
  int merge[MAX+MAX];
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
  
  ordina_sequenza(v1, n);
  ordina_sequenza(v2, m);
  
  printf("Sequenza 1 :");
  stampa_sequenza(v1, n);
  
  printf("Sequenza 2 :");
  stampa_sequenza(v2, m);
  
  //inserire codice MERGE che dati v1 e v2 li mette in maniera ordinata dentro l'array merge
  //es: v1: 43, 65, 62, 23; 
  //    v2: 21, 5, 64, 74 31;
  //  =>merge: 5, 21, 23, 31, 43, 62, 64, 65, 74;

  stampa_sequenza(merge, n+m);
}

void stampa_sequenza(int a[], int l){
    int i;
    for(i=0; i<l; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}

void ordina_sequenza(int a[], int l){
  int h, k, p=l, i=0;
  do{
    k=0;
    for(i=0;i<l-1;i++){
      if(a[i]>a[i+1]){
        h=a[i];
        a[i]=a[i+1];
        a[i+1]=h;
        k=1;
        p=i+1;
      }
    }
    l=p;
  }while(k==1 && l>1);
}

void leggi_array(int a[] , int l){
  int i;
  for(i=0;i<l;i++){
    printf("Inserisci l'elemento della sequenza [%d]:", i);
    scanf("%d", &a[i]);
  }
}
