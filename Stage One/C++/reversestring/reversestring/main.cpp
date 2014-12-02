#include <iostream>
#include <string>

using namespace std;

string reverseString(string);
int main() {
    
    string str = "esrever ni si siht fo llA"; //Test reverse string
    
    //Swapping technique to reduce the amount of space used
    cout << reverseString(str) << endl;
    return 0;
}

string reverseString(string str){
    
    //For loop to iterate up to half the size of the passed string
    for(int index = 0; index < (str.size()/2); index++){
        char c = str[index]; //Store character at index position in string
        str[index] = str[str.size()-1-index]; //Set character at index position in array to character at size-1-index
        str[str.size()-1-index] = c; //Set character at size-1-index to stored character
    }
    return str;
}
