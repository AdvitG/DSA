#include <iostream>
#include <string> 
using namespace std; 
int main(){
    string input = "abcdcba";
    string a,b;  
    int i;
    string remove;
    for(int i = input.length() - 1; i >= 0; i--){
        
        for(int j = input.length() - 1; j >= i; j--){
            a += input[j]; 
        }
        for(int j=i; j<input.length();j++){
            b += input[j];

        }

        //cout<<a<<endl;
        //cout<<b<<endl;

        if (a.length()==input.length()) {
            if (a.compare(input) == 0) {
                cout << "Null" << endl; 
            } else {
                a.erase(0, remove.length());
                cout<<a;
            }
            }
        
        if (a.compare(b) == 0) {
            remove=b; 
        }
        a="";
        b="";
    
    }   
    return 0; 
}

    

