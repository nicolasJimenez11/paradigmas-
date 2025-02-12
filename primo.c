#include<stdio.h>
#include<math.h>


int Primo(int x){

int resultado=1;
for(int i=2;i*i<=x;i++){
    if(x % i==0){
        return 0;
        }
     return resultado;
    }
}


int main(){
    
    int x;
    printf("ingrese el numero de calcular");
    scanf("%d",&x);
    if(Primo(x)){
        printf("%d es numero primo.\n",x);
    }else{
        printf("%d no es numero primo.\n",x);
    }


    return 0;
}
