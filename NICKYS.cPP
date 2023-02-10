
#include<iostream>
using namespace std;

int main()
{
    char choice;
    double t1, t2, t3, average;

    /* do-while loop runs at least once */
    do
    {
        cout << "Please enter three test scores: ";
        cin >> t1 >> t2 >> t3;

        average = (t1 + t2 + t3) / 3;
        cout << "The average of the three test scores is: " << average << endl;

        cout << "Would you like to average another set of test scores? (y/n) ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    cout << "Goodbye!";
    return 0;
}
