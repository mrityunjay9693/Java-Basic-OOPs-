#include<iostream>
using namespace std;

#define PI 3.14

class vectors
{
        int *v;
        int size;
    public:
        vectors(int m) // a null vectors is created
        {
            v = new int[size=m];
            for(int i=0; i<size; i++){
                v[i] = 0;
            }

        }
        vectors(int *a) // a vectors is created by the help of an array
        {
            for(int i=0; i<size; i++)
                v[i] = a[i];
        }
        int operator*(vectors &y)
        {
            int sum = 0;
            for(int i=0; i<size; i++)
                sum += this -> v[i] * y.v[i];
            return sum;
        }


};

int main()
{
    int x[3] = {1,2,3};
    int y[3] = {4,5,6};
    vectors v1(3);
    vectors v2(3);
    v1 = x;
    v2 = y;
    int R = v1 * v2;
    cout<<"R= "<<R;
    //cout<<"vectors v1= "<<v1;
    //cout<<"vectors v2= "<<v2;
    return 0;

}
