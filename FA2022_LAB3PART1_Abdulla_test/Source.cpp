#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double bagCost;

    double bagAreaCovered;
    int bagSize;

    cout << "Enter the area, in square feet, that you want to fertilizer? ";
    cin >> bagAreaCovered;

    cout << "Enter the amount of fertilizer, in pounds, in the bag: ";
    cin >> bagSize;

    cout << "Enter the cost of the " << bagSize
        << " pound fertilizer bag:  ";
    cin >> bagCost;

    cout << fixed << showpoint << setprecision(2);
    cout << "The cost of the fertilizer per pound is: $"
        << bagCost / bagSize << endl;
    cout << "The cost of the fertilizer per square foot is: $"
        << bagCost / bagAreaCovered << endl;


    system("pause");
    return 0;
}
