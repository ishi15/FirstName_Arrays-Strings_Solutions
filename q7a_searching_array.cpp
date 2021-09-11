#include<iostream>
using namespace std;
#define max_size 1000      //max array size

int BinarySearch(int *a,int n,int item)
    {   
     int mid,end=n-1,beg=0,flag=0;
     mid=(beg+end)/2;
    
   while(beg<=end && a[mid]!=item)
    { 
        if(item<mid)
        end=mid-1;
        else
        beg=mid+1;
     mid=(beg+end)/2;
    }
    if(beg>end)
    return flag=-1;
    else
    return mid;
    }
    int LinearSearch( int *a,int size,int item )
    {
       int i,flag=0;
       for(i=0;i<size;i++)
       {
        if(a[i]==item)
        { flag=1;
        break; }
       }  
    if(flag==1)
   return i;
   else
   return -1;
    }

int main(){
    int a[max_size],size,i,item,num,loc;
    
    cout<<"enter size of array(1-1000): ";
    cin>>size;
    cout<<"enter elements of array: ";
    for(i=0;i<size;i++)
    cin>>a[i];
    cout<<"enter element to be searched ";
    cin>>item;
    cout<<"select type of search \n 1.linear search \n 2.binary search \n";
    cin>>num;
    switch(num){
        case 1: //linear search
                 loc=LinearSearch( a,size,item);
                 if(loc==-1)
                 cout<<"element not found";
                 else
                 cout<<"element found at"<<loc;
                 break;
        case 2: //binary search
                loc=BinarySearch( a,size,item);
                if(loc==-1)
                cout<<"element not found";
                else
                cout<<"element found at"<<loc;

        default: cout<<"enter correct option(1/2) ";
    }
}

