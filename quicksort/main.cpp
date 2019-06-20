#include <iostream>
#include <vector>
using namespace std;

int swap(int* A,int i, int j)
{
    int tmp=A[i];
    A[i]=A[j];
    A[j]=tmp;
    return 1;
}

int partition (int* A, int left,int right)
{
    int i=left-1; //count how many element smaller than pivot;
    int j=0;       // right is pivot;
    for(j=left;j<right;j++){
        if(A[j]<A[right]){
            i++;
            //int tmp=A[i];
            //A[i]=A[j];
            //A[j]=tmp;
            swap(A,i,j);
        }
    //int tmp=A[i+1];
    //A[i+1]=A[right];
    //A[right]=tmp;
    }
    swap(A,i+1,right);   // change pivot;
    return i+1;
}

int Quicksort(int* A,int left, int right)
{
    int p=0;

    if(left<right){
        p=partition(A,left,right);
        //cout<<p;
        Quicksort(A,left,p-1);
        Quicksort(A,p+1,right);
    }
}


int main()
{
    int A[9]={10,3,5,8,4,6,9,1,7};
    Quicksort(A,0,8);
    for(int i=0;i<=8;i++){
        cout<<A[i]<<endl;
    }

    return 0;
}
