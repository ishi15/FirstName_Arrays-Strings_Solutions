//find 2nd largest element in array
#include<iostream>
#include<limits.h>
using namespace std;
#define max_size 1000      //max array size
int main(){
    int arr[max_size],size,i,max1,max2;
    cout<<"enter size of array(1-1000): ";
    cin>>size;
    cout<<"enter elements of array";
    for(i=0;i<size;i++)
    cin>>arr[i];
    max1=max2=INT_MIN;
    for(i=0;i<size;i++)
    {
        if(arr[i]>max1)
      {  max2=max1;
        max1=arr[i];  }

        else if(arr[i]<max1 &&arr[i]>max2)
       { max2=arr[i]; }
    }
    cout<<"second largest element is:  "<<max2;
}

