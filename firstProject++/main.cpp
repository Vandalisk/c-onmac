#include <iostream>
#include <string>
using namespace std;

int Pi(string s){
    unsigned long length = s.length();
    int j = 1;
    int i;
    int result = 0;
    while(j < length){
        i = 0;
        while(i < j){
            if(s[i] != s[length - j + i])
                break;
            i++;
        }
        if(i == j)
            result = j;
        j++;
    }
    
    return result;
}

int main(int argc, const char * argv[])
{
    int N;
    string password;
    string decryptPass;
    
    cin >> N;
    cin >> password;
    cin >> decryptPass;
    
    
    return 0;
}

