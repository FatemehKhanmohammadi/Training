// mosafer keshi
#include<stdio.h>
int main(){
    int n, i, t;
    int m = 0;
    printf("Enter the number of trips: ");
    scanf("%d", &n);
    for(i=0; i<n; i++){
        printf("Enter the number of passengers: "); 
        scanf("%d", &t);
        if(t == 11){
             m = m +1;
        }  
    
    }
    printf("The good trips number = %d", m);
    return 0;

}
