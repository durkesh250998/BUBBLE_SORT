#include<stdio.h>
int main(){
    int array[10]={70,40,50,10,5,1,25,19,75,25};
    int n=10,temp,z,j;
    for(z=0;z<n;z++){
        for(j=0;j<n-1;j++){
                    if(array[j]>array[j+1]){
                        
                                temp=array[j];
                                array[j]=array[j+1];
                                array[j+1]=temp;
                        }
        }}
    for(int i=0;i<n;i++){
        printf("\nSORTED ARRAY %d\n",array[i]);
} }