#include<iostream>
using namespace std;
class BubbleSort{
    public:
    void bubbleSort(int arr[],int n){
        for(int i=0;i<n;i++){
            for(int j=1;j<n-i;j++){
                if(arr[j-1]>arr[j]){
                    int temp=arr[j];
                    arr[j]=arr[j-1];
                    arr[j-1]=temp;
                }
            }
        }
    }
};
int main(){
    BubbleSort sort;
    int arr[]={23,45,66,43,12,99,34};
    int n=7;
    sort.bubbleSort(arr,7);
    for(int i=0;i<7;i++){
         cout<<arr[i]<<" ";
    }
}
