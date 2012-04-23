#include <iostream>


int isort(int* x,int size){
  for(int i=0;i<size;i++){
    int temp;
    temp = x[i];
    int j=i;
    for(;j>0&&x[j-1]>temp;j--){
      x[j]=x[j-1];
    }
    x[j] = temp;
  }
}

void tprint(int*x,int size){
  for(int i=0;i<size;i++){
    printf("%d ",x[i]);
  }
  printf("\n");
}
int swap(int& x,int& j){
  int temp ;
  temp = x;
  x = j;
  j=temp;
  return 0;

}

int qsort1(int* x,int l,int u){
  tprint(x,10);
  printf("qsort l %d u %d\n",l,u);
  if(l>=u)
    return 0;

  int m=l;
  for(int i=l+1;i<u;i++){
    if(x[i]<x[l]){
      swap(x[++m],x[i]);
    }

  }

  swap(x[l],x[m]);
  qsort1(x,l,m-1);
  qsort1(x,m+1,u);
}


int main(int argc,char**argv){
  int x[10]={99,19,8,88,23,24,39,23,22,9};

  // isort(x,10);
  qsort1(x,0,9);

  tprint(x,10);
    
  return 0;

}
