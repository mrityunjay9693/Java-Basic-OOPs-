#include<iostream>
using namespace std;

class Array{
    private:
        int Arr[10],i=0, sum=0;
        public:
        void input()
        {
            printf("Enter the elements as input in array Arr:");
            for(i=0; i<10; i++ ){
                //scanf("%d",&Arr[i]);
                cin>>Arr[i];
            }
        }
        void sumof_elements_of_array()
        {
           // int sum=0;
            for(int i=0; i<10; i++){
                sum += Arr[i];
            }
        }

        void display()
        {
            //printf("The array Arr after input: ");
            cout<<"The array Arr after input: "<<endl;
            for(i=0; i<10; i++){
                //printf("%d",Arr[i]);
                cout<<Arr[i]<<endl;
            }
        }
        void display_sum()
        {
            cout<<"The sum of elements of array Arr:"<<sum<<endl;

        }


};

int main()
{   
    Array arr;
    arr.input();
    arr.display();
    arr.sumof_elements_of_array();
    arr.display_sum();

    return 0;
}
      