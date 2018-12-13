#include <iostream>
#include <string>
using namespace std;

int main(){
cout << "Please enter your name: " <<endl;
string name;
cin >> name;

string greeting = "Hello, " + name + "!";

//building lines
string spaces(greeting.size(), ' '); 
string second = "* " + spaces + " *";

string first(second.size(), '*');

//print
cout << endl;
cout << first << endl;//                            *********************
cout << second << endl; //                          *                   *
cout << "* " << greeting << " *" << endl;//         *  Hello, James     *
cout << second << endl;//                           *                   *
cout << first << endl;//                            *********************

return 0;

}
