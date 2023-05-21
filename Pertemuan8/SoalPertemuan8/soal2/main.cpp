#include <iostream>

using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printArr(int arr[], int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }cout << endl;
}

void selection(int arr[], int size){
    for(int j=0; j<size-1; j++){
        int min = j;
        for(int i=j+1; i<size; i++){
            if(arr[i] < arr[min])
                min = i;
        }swap(&arr[min], &arr[j]);
    }
}

void insertion(int arr[], int size){
    for(int j=1; j<size; j++){
        int k = arr[j];
        int l = j-1;
        while(k<arr[l] && l>=0){
            arr[l+1] = arr[l];
            --l;
        }arr[l+1] = k;
    }
}

int main()
{
    int data[] = {5,4,3,2,2,1,1};
    int size = sizeof(data)/sizeof(data[0]);
    //selection(data, size);
    insertion(data, size);

    cout << "Data Tersortir : ";
    printArr(data, size);
    return 0;
}
