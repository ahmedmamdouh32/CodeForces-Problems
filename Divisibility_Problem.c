/*
* /Task Name : Divisibility Problem
* Task Link : https://codeforces.com/contest/1328/problem/A
* Contributer : Ahemd Mamdouh
* Date : 10/3/2024   
*/

#include <stdio.h>
#include <stdlib.h>
 
int main()
{
int steps = 0;
int test_cases = 0;
int a,b= 0;

scanf("%d",&test_cases);
 
for(int i = 0 ; i < test_cases ; i++){
 
    scanf("%d",&a);
    scanf("%d",&b);
 
    if(a<b){
        steps=b-a;
    }
    else if(a==b){
        steps=0;
    }
    else if(a>b){
    
        if(a%b==0)
            steps=0;
        else
        steps=b-a%b;
 
    }
 
printf("%d\n",steps);
 
}
    return 0;
}