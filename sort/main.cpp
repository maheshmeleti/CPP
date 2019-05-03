#include <iostream>
#include <stdio.h>
using namespace std;

void isort(int& x, int& y, int& z){
    int temp;
    if(y>x){
        temp = y;
        y = x;
        x = temp;
    }
    if (z>x){
        temp = z;
        z = x;
        x = temp;
    }
    if (y<z){
        temp = y;
        y = z;
        z = temp;
    }
}

int main()
{
    int a;
    int b;
    int c;
    printf("Enter integers to be sorted, or non-numeric character to exit: ");
    while(scanf("%d %d %d", &a, &b, &c)){
            isort(a,b,c);
            printf("\nthe numbers sorted are %d %d %d",a,b,c);
            printf("\nEnter integers to be sorted, or non-numeric character to exit: ");
        }
    return 0;
}
