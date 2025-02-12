#include<stdio.h>
#include<math.h>


int Factorial(int x){

if(x==0){
    return 1;

}
    return x* Factorial(x-1);
    
}



int main(){
    
    int x;
    printf("ingrese el numero de calcular");
    scanf("%d",&x);//para pasa de char a numero entero se usa el %d
    printf("el factorial de %d es: %d\n" ,x,Factorial(x));
    return 0;
}
