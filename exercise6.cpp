#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    cout << "What is your name? ";
    string name;
    cin >> name; // frist std::cin step
    cout << " Hello, " << name
                << endl << "And what is yours?";
    cin >> name;  // second std::cin step
    cout << "Hello, " << name
                << "; nice to meet you too!" << endl;
    return 0;
 
}
