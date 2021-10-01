#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){

    int n , attempts = 1;
    char str[20];
    srand(time(NULL));

    int num = rand();

    int rand_num = num % 100 + 1;
    printf("Random No. is : %d",rand_num);

    printf("\nEnter Your Name : ");
    scanf("%s",&str);
    do{

    printf("\nEnter the no : ");
    scanf("%d",&n);

    if(n<rand_num){
        printf("\ntry some big no.");
    }
    else if(n>rand_num){
        printf("\ntry lower no.");
    }
    else
    {
        printf("\nCongratulations !!! %s, You got this in %d attempts",str,attempts);
    }
    
    attempts++;
    
    }while(n != rand_num);
}