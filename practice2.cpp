#include <iostream>
// including cmath for higher calculations
#include <cmath>


    using namespace std;

int function3()
{
    int i = 0;
    do
    {
        cout << i;
        i++;
    } while (i < 100);
    return 0;
}

int function2()
{
    int code = 3;
    switch (code)
    {
    case 1:
        cout << "attack";
        break;
    case 2:
        cout << "retreat";
        break;
    case 3:
        cout << "dance";
        break;
    }
    return 0;
}
int function()
{

    // ternerary operator on 17 shortens conditionals as follows...
    // if (time < 18) {
    //   cout << "Good day.";
    // } else {
    //   cout << "Good evening.";
    // }
    int time = 20;
    string result = (time < 18) ? "Good day." : "Good evening.";
    cout << result;
    return 0;
};

int main()
{
    int x;
    int y;
    int sum;

    cout << "Enter a value for the \"X\" variable";
    cin >> x;
    cout << "Enter a value for the \"Y\" variable";
    cin >> y;
    // perform math operations and display them in an organized way.

    sum = x + y;
    // declarations for the max and min values.
    int maxValue = max(x, y);
    int minValue = min(x, y);
    int sqrtOfSum = sqrt(sum);
    int natLogOfSum = log(sum);
    // display variables
    cout << "Maximum: " << maxValue << endl;
    cout << "Minimum: " << minValue << endl;
    cout << "Sum: " << sum << endl;
    cout << "square of sum: " << sqrtOfSum << endl;
    cout << "log of sum: " << natLogOfSum << endl;

    function();
    cout << endl;
    function2();
    function3();
};
