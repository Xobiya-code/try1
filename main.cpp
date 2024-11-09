//just
#include<iostream>

using namespace std;

int main () {
    int num1, num2;
    char op;

    cout << "enter two numbers"<<endl;
    cin >> num1 >> num2;

    cout << " Enter an operator ( +, -, *, /) " <<endl;
    cin >> op;

    switch (op) {
    case '+' :
        cout << num1 + num2;
        break;
    case '-':
        cout << num1 - num2;
        break;
    case '*' :
        cout << num1 * num2;
        break;
    case '/':
        if(num2 != 0)
            cout << num1 / num2;
        else
            cout << "Error: / with 0 not possible";
        break;
    default:
        cout << "Invalid operation!";
        break;
    }
    cout<<"Thanks for you help :";
    cout<<"Please come back later:";
return 0;
}
