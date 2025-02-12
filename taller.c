#include<stdio.h>
#include<math.h>


int Factorial(int x){

int resultado=1;
for(int i=1;i<=x;i++){
    resultado*=i;
}
return resultado;
}



int main(){
    
    int x;
    printf("ingrese el numero de calcular");
    scanf("%d",&x);
    printf("el factorial de %d es: %d\n" ,x,Factorial(x));
    return 0;
}
