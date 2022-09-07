#include<iostream>
using namespace std;
template<class X>
class A{
    private:
    X a,b;
    public:
    void set(X a, X b)
    {
        this->a = a;
        this->b = b;
    }
    void show()
    {
        cout<<"A = "<<a<<endl;
        cout<<"B = "<<b<<endl;
    }
};
int main()
{
    A<int> obj;
    obj.set(4,5);
    obj.show();
    A<float> obj1;
    obj1.set(5.5,6.6);
    obj1.show();
}

