#include<iostream>
using namespace std;

void swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp= temp;
}

void bubbleSort(int Arr[], int n){
    int i,j;
    bool swapped;
    for(i=0;i<n-1;i++){
        swapped= false;
        for(j=0;j<n-i-1;j++){
            if(Arr[j]>Arr[j+1]){
                swap(&Arr[j], &Arr[j+1]);
                swapped=true;
            }
        }
        if(swapped==false)
            break;
    }
}

int main(){
    int arr[]={64,34,25,12,2,10,11};
    int n= sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,n);
    cout<<"Sorted Array is:\n";
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}