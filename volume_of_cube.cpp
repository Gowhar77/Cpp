#include <iostream>
using namespace std;
class Cube
{
public:
    double side;
    double vol;

    double volume()
    {

        return (side * side * side);
    }
    Cube(double side1)
    {
        side = side1;
    }
};

int main()
{
    Cube c1(12.5);
    cout << "The side of first cube is :" << c1.side << endl;

    Cube c2(3);
    cout << "The side of first cube is :" << c2.side << endl;
    cout << "The volume of first cube is : " << c1.volume() << endl;
    cout << "The volume of first cube is : " << c2.volume() << endl;

    return 0;
}