
#include <iostream>
using namespace std;
 
class Point
{
private:
    int x, y;
 
public:
    // Parameterized Constructor
    Point(int x1, int y1)
    {
        x = x1;
        y = y1;
    }
 
    int printX()
    {
        return x;
    }
    int printY()
    {
        return y;
    }
};
 
int main()
{
    // Constructor called
    Point p1(10, 15);
 
    // Access values assigned by constructor
    cout << "p1.x = " << p1.printX() << ", p1.y = " << p1.printY();
 
    return 0;
}
