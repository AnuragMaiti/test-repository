#include <stdio.h>
#include <iostream>

using namespace std;

int accept()
{
    int n;
    cout << "Please enter the number n:" << endl;
    cin >> n;
    return n;
}

int main()
{
    int sum = 0;
    int x = accept();
    for(int i = 1;i<=x;i++){
        sum = sum + i;
    }
    cout << "The sum of natural numbers uptil n is: " << sum;
    return 1;
}
