#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int arr[5];
    int average = 0;
    for(int i=0; i<5; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
        average += arr[i];
    }
    cout<<"Average: "<<average/5<<endl;
    for(int i=0; i<5; i++){
        if(arr[i] > average/5){
            printf("%d is greater than the average.\n", arr[i]);
        }else if(arr[i] < average/5){
            printf("%d is less than the average.\n", arr[i]);    
        }else{
            printf("%d is equal to the average.\n", arr[i]);
        }
    }

    return 0;
}