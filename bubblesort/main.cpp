#include <iostream>

using namespace std;
int swap(int* A,int i, int j)
{
    int tmp=A[i];
    A[i]=A[j];
    A[j]=tmp;
    return 1;
}

int bubblesort(int* A,int left,int right){
    int i=0;
    int j=0;

    for (i=0;i<=right;i++){
        for(j=0;j<=right-i-1;j++){
            if(A[j]>A[j+1]){
                swap(A,j,j+1);
            }
        }
    }

    return 1;
}




int main()
{
    int A[9]={10,3,5,8,4,6,9,1,7};
    bubblesort(A,0,8);
    for(int i=0;i<=8;i++){
        cout<<A[i]<<endl;
    }

    return 0;
}
