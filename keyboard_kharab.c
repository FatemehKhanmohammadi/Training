//keyborad kharab
#include<stdio.h>
#include<math.h>
int main(){
    int x, y, sum = 0, i = 0, a = 0, b = 0, j = 0 , t = 0, q = 0; 
    printf("Enter the first number:");
    scanf("%d", &x);
    while(x != 0){
        t = x % 10;
        if(t == 0){
            t = 0;
        }
        else if(t == 1){
            t = 9;
        }
        else if(t > 1){
            t = t - 1;
        } 
        a = a + t * pow(10,i);
        x = x/10;
        i = i+1;
    }
    printf("Enter the second number:");
    scanf("%d", &y); 
    while(y != 0){
        q = y % 10;
        if(q == 0){
            q = 0;
        }
        else if(q == 1){
            q = 9;
        }
        else if(q > 1){
            q = q - 1;
        }
        b = b + q * pow(10,j);
        y = y/10;
        j = j+1;
    } 
    sum = a + b;
    printf("The sum equals to = %d, %d, %d ", a, b, sum);

    return 0;

}
