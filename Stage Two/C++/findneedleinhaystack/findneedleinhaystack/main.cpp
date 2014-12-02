#include <iostream>
#include <string>

using namespace std;

const int ARRAY_SIZE = 9; //It is not possible to get a static array's size dynamically

void findNeedleInHaystack(string, string*);
int main() {
    string s[ARRAY_SIZE] = {"This", "is", "an", "aray", "to", "find", "the", "needle", "in"};
    string needle = "the";
    findNeedleInHaystack(needle, s);
    return 0;
}
void findNeedleInHaystack(string needle, string* haystack){
    for(int index = 0; index < ARRAY_SIZE; index++){
        
            if(haystack[index] == needle){
                cout << "Needle \"" << needle << "\" was found at index " << index << endl;
                break;
            }
        
    }
}

