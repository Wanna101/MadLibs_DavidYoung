// C++ program to print words in a sentence 
#include <bits/stdc++.h> 
using namespace std; 
  
void removeDupWord(string str) 
{ 
    string word = ""; 
    for (auto x : str)  
    { 
        if (x == ' ') 
        { 
            cout << word << endl; 
            word = ""; 
        } 
        else { 
            word = word + x; 
        } 
    } 
    cout << word << endl; 
} 
  
// Driver code 
int main() 
{ 
    string line = "16 David Young"; 
    removeDupWord(line); 
    return 0; 
}
