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

int piSearch(string password, string decryptPass){
    
    int i = 0;
    int j = 0;
    int shift = 0;
    string s;
    unsigned long passLength = password.length();
    unsigned long dPassLength = decryptPass.length();
    
    while(j < dPassLength && i < passLength){
        
        if(password[i] == decryptPass[j]){
            i++;j++; s.append(&password[i]);
        }
        else{
            j -= Pi(s);
            s = "";
            shift += i;
        }
        
    }
    
    if(j == dPassLength)
        return shift;
    
    return -1;
}

int main(int argc, const char * argv[])
{
    int N;
    string password;
    string decryptPass;
    
    cin >> N;
    cin >> password;
    cin >> decryptPass;
    password += password;
    
    cout << piSearch(password, decryptPass) << endl;
    
    
    return 0;
}

