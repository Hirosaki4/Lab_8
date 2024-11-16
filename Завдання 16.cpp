#include <iostream>
#include <cstring> 
#include <Windows.h> 

using namespace std;

string mergeUniqueChars(const char* str1, const char* str2) {
    string result = ""; 

  
    for (int i = 0; str1[i] != '\0'; i++) {
        if (result.find(str1[i]) == string::npos) { 
            result += str1[i]; 
        }
    }
  
    for (int i = 0; str2[i] != '\0'; i++) {
        if (result.find(str2[i]) == string::npos) {
            result += str2[i];
        }
    }

    return result;
}

int main() {
    
    SetConsoleCP(1251); 
    SetConsoleOutputCP(1251);

    const char* str1 = "привіт";
    const char* str2 = "світ";

    string mergedString = mergeUniqueChars(str1, str2);
    cout << "Результат: " << mergedString << endl;

    return 0;
}
