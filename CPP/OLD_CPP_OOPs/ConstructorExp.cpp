#include<iostream>
using namespace std;

class student{
    private:
        int roll;
    public:
    student(){
        cout<<"Roll: "<<roll;
    }
};

class office : public student{
    private:
        int fees;
    public:
        office(){
            cout<<"Fees: "<<fees;
        }
};

int main()
{
    
}