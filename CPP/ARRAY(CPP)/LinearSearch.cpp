#include<iostream>
using namespace std;

int main()
{
    int Array[5], Search_value, i=0;

    cout<<"Enter the elements in array: "<<endl;
    for(i=0; i<5; i++){
        cin>>Array[i];
    }
    cout<<"Enter Search Valut to be Searched"<<endl;
    cin>>Search_value;

    for(i=0; i<5; i++){
        if(Search_value == Array[i]){
            break;
        }
    }
    
    if(i>=5){
        cout<<"The value is not found"<<endl;
    } 
    else
        cout<<"The value is found at:"<<i<<endl;

    return 0;

}