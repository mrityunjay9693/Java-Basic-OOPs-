#include<iostream>
using namespace std;
void display(int *Array);
int main(){
    int Array[] = {12,5,96,33,45};
    cout<<"Unsorted Array: "<<endl;
    display(Array);
    // for(int i=0;i<5;i++){
        // cout<<"Element at Postition "<<i<<":"<<Array[i]<<endl;
        // cout<<Array[i]<<endl;
    // }

    for(int i=0; i<4; i++){          // O(n)
        for(int j=i+1; j<5; j++){    //O(n)
            if(Array[i]>Array[j]){
                int temp = Array[i];
                Array[i] = Array[j];
                Array[j] = temp;
            }
        }
    }
    cout<<"Sorted Array: "<<endl;
    display(Array);
    // for(int i=0; i<5; i++){
        // cout<<Array[i]<<endl;
    // }

    return 0;
}


void display(int *Array) {
     for(int i=0; i<5; i++){
        cout<<Array[i]<<endl;
    }
}