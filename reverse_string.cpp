#include <iostream>    
#include<sstream>    
#include<algorithm>    
  
using namespace std;  
  
int main() {  
  
    string s;  
    string str[100];  
    int count = 0;   
    while (getline(cin, s))  
    {  
        stringstream s2(s);    
        string token;   
        while (getline(s2, token, ' '))  
        {  
            str[count] = token;  
            count++;  
        }  
        reverse(str, str + count);  
  
        for (int i = 0; i < count; i++){  
            if (i != count - 1){  
                cout << str[i] << " ";  
            }  
            else{  
                cout << str[i] << endl;  
            }  
        }  
        count = 0;  
    }  
    return 0;  
}