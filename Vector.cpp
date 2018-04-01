
#include <string>
#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;



void suma(int *a,int *b, int *c, int max){
  for(int i=0;i<max;i++)
    c[i]=a[i]+b[i];
}

void llenar(int *vec,int max){

  for(int i=0; i<max;i++){
    vec[i]= rand() %max;
  }
}


void mostrar(int *vec,int max){
  for(int i=0;i<max;i++) {
    cout<<vec[i]<<" ";
  }
}


int main(int argc, char const *argv[]){


  int vec_size = atoi(argv[1]);
  cout<<"Tamaño del vector ="<<vec_size << endl;
  int *a;
  int *b;
  int *c;

  a=(int *)malloc(vec_size * sizeof(int));//new int[vec_size];
  b=(int *)malloc(vec_size * sizeof(int));
  c=(int *)malloc(vec_size * sizeof(int));

  llenar(a,vec_size);
  llenar(b,vec_size);




  /*mostrar(a,vec_size);
  cout<<"vector a"<<endl;
  mostrar(b,vec_size);
  cout<<"vector b"<<endl;
 */ 
  


  clock_t start,end;
  start =clock();
  suma(a,b,c,vec_size);
  end=clock();
  double resul = (end-start)/1000;
  printf ( "%.20g", resul);

  //mostrar(c,vec_size);
  //cout<<endl<<"vector c"<<endl;

  free (a);
  free (b);
  free (c);
  return 0;
}
