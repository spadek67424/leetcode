#include <iostream>

using namespace std;
int Merge(int* A,int* reg,int left,int mid,int right){
    int n2=right-mid+1;
    int n1=mid-left;

    int start1=left;
    int start2=mid+1;
    int end1=mid;
    int end2=right;
    int k=left;
    while(start1<=end1&&start2<=end2){
        if(A[start1]<A[start2]){
            reg[k]=A[start1];
            k++;
            start1++;
        }
        else{
            reg[k]=A[start2];
            k++;
            start2++;
        }
    }
    while(start1<=end1){
        reg[k]=A[start1];
        k++;
        start1++;
    }
    while(start2<=end2){
        reg[k]=A[start2];
        k++;
        start2++;
    }
    for(int i=left;i<=right;i++){
        A[i]=reg[i];
    }

    return 1;
}

int Mergesort(int* A,int* reg,int left,int right){

    if(left<right){
        int mid=(left+right)/2;
        Mergesort(A,reg,left,mid);
        Mergesort(A,reg,mid+1,right);
        cout<<left<<"bbb"<<endl;
        cout<<right<<"aaa"<<endl;
        Merge(A,reg,left,mid,right);
    }

    return 1;
}


int main()
{
    int A[9]={10,3,5,8,4,6,9,1,7};
    int reg[9];
    for(int i=0;i<=8;i++){
        reg[i]=A[i];
    }
    Mergesort(A,reg,0,8);
    for(int i=0;i<=8;i++){
        cout<<A[i]<<endl;
    }

    return 0;
}
