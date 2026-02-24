#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double length1, width1, length2, width2;

    cout << "Enter the length of the first rectangle:" << endl;
    cin >> length1;
    cout << "Enter the width of the first rectangle:" << endl;
    cin >> width1;

    cout << "Enter the length of the second rectangle:" << endl;
    cin >> length2;
    cout << "Enter the width of the second rectangle:" << endl;
    cin >> width2;

    double area1 = length1 * width1;
    double area2 = length2 * width2;

    if (area1 > area2)
        cout << "The 1st rectangle has the greater area." << endl;
    else if (area1 < area2)
        cout << "The 2nd rectangle has the greater area." << endl;
    else
        cout << "The areas are the same." << endl;

    return 0;
}

