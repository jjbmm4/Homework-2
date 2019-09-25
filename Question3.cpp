#include <iostream> 

#include <string> 

#include <stack> 

using namespace std; 

  

int main() { 

    string input = "The quick brown fox jumps over the lazy dog."; 

    string newString; 

    stack <string> x; 

  

    for (int i = 0; i < input.size(); i++) { 

        newString += input[i]; 

        if (input[i] == ' ') { 

            x.push(newString); 

            cout << newString; 

            newString = ""; 

        } 

        else if (input[i] == '.') { 

            x.push(newString); 

            cout << newString; 

        } 

    } 

    cout << x.size() << endl; 

    while (x.size() > 0) { 

        cout << x.top(); 

        x.pop(); 

    } 

  

    system("pause"); 

} 