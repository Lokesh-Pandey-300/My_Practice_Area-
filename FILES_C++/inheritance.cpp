#include<iostream>
using namespace std;
class shape
{
    proctected:int height;
    proctected:int width;

};
class rectangle:public shape
{
    public:int getarea()
};
int main()
{
    rectangle R;
    cout << "Enter parent id: ";
    cin >> R.width;
    cout << "Enter child id: ";
    cin >> R.height;
    cout << "child id is " << obj.id_c << endl;
    cout << "parent id is " << obj.id_p << endl;
    return 0;

}