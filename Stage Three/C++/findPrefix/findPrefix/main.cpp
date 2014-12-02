#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

const int ARRAY_SIZE = 10;

//Function used to return string array
string* returnArrayWithoutPrefix(string, const string*, int&);

int main() {
    
    int count = 0;
    string prefix = "pre"; //Test prefix
    string array[ARRAY_SIZE] = {"This", "is", "my", "array", "of", "prefixed", "prefixes", "random", "preliminary", "word"}; //Test array
    string *newArray = returnArrayWithoutPrefix(prefix, array, count); //Call function to get new array
    
    //Output the contents of the new array line by line
    for(int i = 0; i < count; i++){
        cout << newArray[i] << endl;
    }
    //Free memory
    delete[] newArray;
    return 0;
}
string* returnArrayWithoutPrefix(string pre, const string* arr, int& COUNT){
    
    string* newArray = new string[ARRAY_SIZE]; //Dynamically allocate string array
    
    for(int index = 0; index < ARRAY_SIZE; index++){
        /*
         
         Conditions: Disregard any words that are smaller than the prefix
                     Disregard any words that have the same letters from subscript 0 - prefix size of test string
         
         */
        if(pre.size() > arr[index].size()){
            newArray[COUNT] = arr[index];
            COUNT++;
            continue;
        }
        else if(!(arr[index].substr(0, pre.size()) == pre)){
            newArray[COUNT] = arr[index];
            COUNT++;
        }
    }
    return newArray;
}
