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
        for(j=i+1;j<n;j++)
        {
          if(a[j]<a[i])
          {
              temp=a[i];
              a[i]=a[j];
              a[j]=temp;
          }
       }
    }
    return a[i];
}

int insertionSort(int *a,int n){
   int i,j,key;
    for(i=1;i<n;i++)
    {
        key=a[i];
        j=i-1;
        while(key<a[j] &&j>=0)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
    return a[i];
}
void merge(int *a,int l,int mid,int r){
   int n1,n2,i,j,k=l;
   n1=mid-l+1;                  //size of new arrays
   n2=r-mid;
 
   int p[n1],q[n2];
   for(i=0;i<n1;i++)
   {                           // new arrays p&q
       p[i]=a[l+i];
   }
   for(i=0;i<n2;i++)
   {  
       q[i]=a[mid+1+i];
   }
   i=j=0;
  while(i<n1 && j<n2){
      if(p[i]<q[j])
      {
          a[k]=p[i];
          k++; i++;

      }
      else
       {
          a[k]=q[j];
          k++; j++; }   }

    while(i<n1){             //if q array is completed 
        a[k]=p[i];
          k++; i++;
    }
     while(j<n2){
        a[k]=q[j];
          k++; j++;
    }
    
  
}

void mergeSort(int *a,int l,int r){
    int mid,i;
    if(l<r)
    {
    
    mid=(l+r)/2;

    mergeSort(a,l,mid);
    mergeSort(a,mid+1,r);
 
    merge(a,l,mid,r);
    }

}
void swap(int *a,int first,int second){
    int temp=a[first];
    a[first]=a[second];
    a[second]=temp;
}
int partition(int *a,int l,int r){
  int pivot,i,j;
  pivot=a[r];
  i=l-1;
  for(j=l;j<r;j++)
  {
      if(a[j]<pivot)
      {
      i++;
      swap(a,i,j); 
      }
  }
  swap(a,i+1,r);
  return i+1;

  }

void quickSort(int *a,int l,int r){
    if(l<r){
        int pi=partition(a,l,r);
        quickSort(a,l,pi-1);
        quickSort(a,pi+1,r);
    }
}

int main(){
    int a[max_size],size,i,num;
    cout<<"enter size of array(1-1000): ";
    cin>>size;
    cout<<"enter elements of array: ";
    for(i=0;i<size;i++)
    cin>>a[i];
    int l=0,r=size-1,b=size-1;
    cout<<"chose type of sorting you want \n 1.Bubble sort \n 2.Insertion Sort\n 3.Selection Sort \n 4.Quick Sort \n 5.Merge Sort \n 6.Gap Sort\n";
    cin>>num;
    switch(num){
        case 1: //Bubble sort -this algo sorts elements in ascending order
                 BubbleSort( a,size);
                 cout<<"sorted array: ";
                 printArray( a,size);
                 break;

        case 2:  //Insertion Sort
                 insertionSort( a,size);
                 cout<<"sorted array: ";
                 printArray( a,size);
                 break;
                 
        case 3:  //Selection Sort
                selectionSort( a,size);
                 cout<<"sorted array: ";
                 printArray( a,size);
                 break;
                
        case 4:  //Quick Sort
                 quickSort( a,l,r);
                 cout<<"sorted array: ";
                 printArray( a,size);
                 break;

        case 5: //Merge Sort
    
                 mergeSort( a,l,b+1);
                 cout<<"sorted array: ";
                 printArray( a,size);
                 break; 
        case 6: //Gap Sort
                 break;
                         
    }  
}         
                 


    
                    
        
