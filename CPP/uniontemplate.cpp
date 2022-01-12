#include<iostream>
using namespace std;

union type
{
    int *i;
    float *j;
};

class vector
{
    union type t;

    vector(int *i)
    {
        t.i = i;
    }
    vector(float *f)
    {
        t.f = f;
    }
};

int main()
{
    vector v1(3);
    int x[3] = {1,2,3};
    v1 = x;
    //cout<<"vector v1= "<<v1;
    vector v2(3);
    float y[3] = {1.2f, 3.7f, 7.8f};
    v2 = y;
    //cout<<"vector v2= "<<v1;

    v1=y;
    //cout<<"vector v1= "<<v1;
}