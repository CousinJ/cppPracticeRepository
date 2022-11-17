#include <iostream>

using namespace std;

// this is C plus plus!

/*DataTypes:
Int...[whole numbers without decimals]
double...[floating point numbers]
char...[single characters like A or B surrounded by SINGLE quotes]
string...[stores text in double quotes. like JS]
bool...[true false]

to declare a var...
**CODE**
type variableName = value;
*/
// Functions..===========......============......======...================.........======
int myNum = 5;
int practiceGetLine()
{
    string fullName;
    string answer;
    cout << "type your full name: ";
    // getline(cin, fullName);  for WHATEVER REASON...this function does not work anymore. I have no idea why because it did before and no changes were made.
    cout << "so you are telling me your name is " << fullName << "?\n";
    cout << "yes(type \"Y\"), no(type \"N\")";
    cin >> answer;
    cout << "welcome aboard sir\n";
    return 0;
}
int functionNumberTwo()
{
    int x, y;
    cout << "enter your age: ";
    cin >> x;
    cout << "enter your birth month(1-12): ";
    cin >> y;
    int sum = x + y;
    cout << sum << endl;
    cout << "hello there!!!";
    return 0;
}

int myNumExtraction()
{
    string variable1;
    cout << "enter a number\n?";
    cin >> variable1;
    cout << "your number is: " << variable1 << endl;
    return 0;
};
//========================INT MAIN========.........========..........============
int main()
{
    practiceGetLine();
    myNumExtraction();
    functionNumberTwo();
    // HERE IS SOME EXAMPLE CODE....
    //  cout << endl;
    //  for (int i = 1; i <= 5; ++i)
    //  {
    //      cout << i << "\n";
    //  }
    //  cout << "jason is a beast" << endl;
    //  cout << "They call him the \"top G\"." << endl;
    //  cout << 2 << endl;
    //  cout << 2 << "\n\n";
    return 0;
}