#include<iostream>
using namespace std;

bool SonAmigos(int, int);
int SumaDivisiores(int);

int main(){
    int a,b;

    cout<<"\n\tDigita los numeros a evaluar\n";
    cin>>a>>b;
    if (SonAmigos(a,b))
        cout<<"\n\tSon amigos\n";
    else
        cout<<"\n\tNo son amigos\n";
}

bool SonAmigos(int num1 , int num2){
    if(SumaDivisiores(num1) == num2 && SumaDivisiores(num2) == num1)
        return true;
    else
        return false;
}
int SumaDivisiores(int num){
    int suma = 0;
    for(int i=1;i<num;i++){
        if(num % i == 0)
            suma = suma + i;
    }
    return suma;
}
