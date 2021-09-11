//reverse array
#include<iostream>
using namespace std;
#define max_size 1000      //max array size
int main(){
    int a[max_size],size,i,temp;
    cout<<"enter size of array(1-1000): ";
    cin>>size;
    cout<<"enter elements of array: ";
    for(i=0;i<size;i++)
    cin>>a[i];
    for(i=0;i<size;i++)
    {
        temp=a[i];
        a[i]=a[size-i-1];
        a[size-i-1]=temp;
    }
    cout<<"reversed array is  \n";
    for(i=0;i<size;i++)
    cout<<a[i];
}