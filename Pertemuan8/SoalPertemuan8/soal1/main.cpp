#include <iostream>

using namespace std;

void min(int arr[], int size);
int ganjil(int x);

int main()
{
    int data[] = {5,4,3,2,1,1};
    int size = sizeof(data)/sizeof(data[0]);
    min(data, size);
    return 0;
}

void min (int arr[], int size){
    int minim = arr[0];
    int index = -1;

    for(int i=0; i<size; i++){
        if(ganjil(arr[i]) && arr[i] < minim){
            minim = arr[i];
            index = i;
        }
    }

    if(minim){
        cout << "Ada : " << minim << " index ke-" << index;
    }else{
        cout << "Tidak ada";
    }
}

int ganjil(int x){
    return(x%2 == 1);
}
