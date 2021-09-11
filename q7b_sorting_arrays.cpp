#include<iostream>
using namespace std;
#define max_size 1000      //max array size

int BubbleSort(int *a,int n){
    int temp,i,j;
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
           if(a[j]>a[j+1])
           {
               temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
           }
        }
    }
    return a[i];
}
int printArray(int *a,int size){
    int i;
    for(i=0;i<size;i++)
    cout<<a[i];
}

int selectionSort(int *a,int n ){
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {   
        for(j=1;j<n;j++)
        {
          if(a[j]<a[i])
          {
              int temp=a[i];
              a[i]=a[j];
              a[j]=temp;
          }
       }
    }
    return a[i];
}



int main(){
    int a[max_size],size,i,num;
    cout<<"enter size of array(1-1000): ";
    cin>>size;
    cout<<"enter elements of array: ";
    for(i=0;i<size;i++)
    cin>>a[i];
    cout<<"chose type of sorting you want \n 1.Bubble sort \n 2.Insertion Sort\n 3.Selection Sort \n 4.Quick Sort \n 5.Merge Sort \n 6.Gap Sort\n";
    cin>>num;
    switch(num){
        case 1: //Bubble sort -this algo sorts elements in ascending order
                 BubbleSort( a,size);
                 cout<<"sorted array: ";
                 printArray( a,size);
                 break;

        case 2:  //Insertion Sort
                 break;
        case 3:  //Selection Sort
                selectionSort( a,size);
                 cout<<"sorted array: ";
                 printArray( a,size);
                 break;
                
        case 4:  //Quick Sort
                 break;

        case 5: //Merge Sort
                 break;
        case 6: //Gap Sort
                 break;
                         
    }  
}         
                 


    
                    
        
