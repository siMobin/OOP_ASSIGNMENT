#include <iostream>
using namespace std;

class Box
{
    int length;
    int breadth;
    int height;
public:
    // Default constructor
    Box() : length(1), breadth(1), height(1) {}

    // Parameterized constructor
    Box(int l, int b, int h) : length(l), breadth(b), height(h) {}

    // Copy constructor
    Box(const Box& B) : length(B.length), breadth(B.breadth), height(B.height) {}

    // Getter functions
    int getLength() const
    {
        return length;
    }

    int getBreadth() const
    {
        return breadth;
    }

    int getHeight() const
    {
        return height;
    }

    // Function to calculate volume
    long long CalculateVolume() const
    {
        return (long long) length * breadth * height;
    }

    // Overloading less than operator for comparison
    bool operator<(const Box& B) const
    {
        if (length < B.length)
        {
            return true;
        }
        else if (length == B.length && breadth < B.breadth)
        {
            return true;
        }
        else if (length == B.length && breadth == B.breadth && height < B.height)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    // Overloading output stream operator to print Box object
    friend ostream& operator<<(ostream& output, const Box& B)
    {
        output << B.length << " " << B.breadth << " " << B.height;
        return output;
    }
};

int main()
{
    // Creating Box objects
    Box box1; // default constructor
    Box box2(3, 4, 5); // parameterized constructor
    Box box3(box2); // copy constructor

    // Printing dimensions of the boxes
    cout << "Box 1: " << box1 << endl<< "Box 2: " << box2 << endl<< "Box 3: " << box3 << endl;
    //cout << "Box 2: " << box2 << endl;
    //cout << "Box 3: " << box3 << endl;

    // Comparing boxes using the < operator
    if (box1 < box2)
    {
        cout << "Box 1 is smaller than Box 2" << endl;
    }
    else
    {
        cout << "Box 1 is greater than or equal to Box 2" << endl;
    }

    if (box2 < box3)
    {
        cout << "Box 2 is smaller than Box 3" << endl;
    }
    else
    {
        cout << "Box 2 is greater than or equal to Box 3" << endl;
    }

    // Calculating volume of boxes
    cout << "Volume of Box 1: " << box1.CalculateVolume() << endl<< "Volume of Box 2: " << box2.CalculateVolume() << endl<< "Volume of Box 3: " << box3.CalculateVolume() << endl;
    //cout << "Volume of Box 2: " << box2.CalculateVolume() << endl;
    //cout << "Volume of Box 3: " << box3.CalculateVolume() << endl;

    return 0;
}
