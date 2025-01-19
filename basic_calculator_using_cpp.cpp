#include <iostream>
using namespace std;

float add(float& x, float& y) // Press 1
{
    return x+y;
}
float sub(float x, float y) // Press 2
{
    return x-y;
}
float multiply(float x, float y) // Press 3
{
    return x*y;
}
float div(float x, float y) // Press 4
{
    return x/y;
}
float percent(float x, float y) // Press 5
{
    return ((x/y)*100);
}
float power(float x, float y) // Press 6
{
    return 0;
}

void end()
{
    return;
}

    // This is the main function  !!!!!

int main()
{
    // Welcome window ...
    int inpt = 0;
    int n = 5;
    cout << "\n\t ****** Wellcome to the basic calculator using c++ *****\n\n";
    cout << "Press [1]  to continue...\n";
    cout << "Press [0]  to Exit...\n";
    cin >> n;
    cout << "\t ******** \n";


    if (n == 0) // Calculator exit here
    {
        end();
    }

    else if (n == 1) // calculator is working
    {
        // Decide the operation 

        cout << "Press [1]  to Add Numbers...\n";
        cout << "Press [2]  to Subtract Numbers...\n";
        cout << "Press [3]  to Multifily Numbers...\n";
        cout << "Press [4]  to Divide Numbers...\n";
        cout << "Press [5]  to calculate parcentage...\n";
        cout << "Press [6]  to calculate powers...\n";
        cin >> inpt;

        float num1, num2;

        if (inpt == 1)
        {
            cout << "Enter 1st number: ";
            cin >> num1;
            cout << "Enter 2nd number: ";
            cin >> num2;
            cout<<"The final answer is: "<<add(num1,num2);
        }
        else if (inpt == 2)
        {
            cout << "Enter 1st number: ";
            cin >> num1;
            cout << "Enter 2nd number: ";
            cin >> num2;
            cout<<"The final answer is: "<<sub(num1,num2);
        }
        else if (inpt == 3)
        {
            cout << "Enter 1st number: ";
            cin >> num1;
            cout << "Enter 2nd number: ";
            cin >> num2;
            cout<<"The final answer is: "<<multiply(num1,num2);
        }
        else if (inpt == 4)
        {
            cout << "Enter 1st number: ";
            cin >> num1;
            cout << "Enter 2nd number: ";
            cin >> num2;
            cout<<"The final answer is: "<<div(num1,num2);
        }
        else if (inpt == 5)
        {
            cout << "\tWhat is the percentage of X Out of Y? \n";
            cout << "Enter X and Y respectivly according to the expression shown above: ";
            cin >> num1;
            cin >> num2;
            cout<<"The final answer is: "<<percent(num1,num2);
        }
        else if (inpt == 6)
        {
            cout << "Enter a and b respectively as a^b: ";
            cin >> num1;
            cin >> num2;
            cout<<"The final answer is: "<<power(num1,num2);
        }
        else
        {
            cout << "!!!!!...Invalid Input...!!!!!!";
        }
    }
    
    
    else {
        cout << "\n\t!!!!!!...Invalid Input...!!!!!!\n";
    }
    return 0;
}