#include <iostream> 
#include <vector>
using namespace std; 
vector<int> mergesort(vector<int> a){
    cout<<"entered function"; 
    vector<int> sorted; 
    if(size(a)==1){
        return a;
        cout<<"in first condition";
    }
    if (size(a)%2==0){
        vector<int> b; 
        vector<int> c; 
        for(int i=0;i<size(a)/2;i++){
            b.push_back(a[i]); 
        }
        for(int i=size(a)/2;i<size(a);i++){
            c.push_back(a[i]); 
        }
    }
    vector<int> b; 
    vector<int> c;
    if (size(a)%2!=0){
         
        for(int i=0;i<(size(a)+1)/2;i++){
            b.push_back(a[i]); 
        }
        for(int i=(size(a)+1)/2;i<size(a);i++){
            c.push_back(a[i]); 
        }
    }
    if(size(b)>1){
        b=mergesort(b);
    }
    if(size(c)>1){
        c=mergesort(c);
    }
    int d=0,e=0; 
    while(true){
        if(size(sorted)==(size(b)+size(c))){
            return sorted; 
        }
        if(b[d]<=c[e]){
            sorted.push_back(b[d]); 
            d=d+1;
        }
        else{
            sorted.push_back(c[e]);
            e=e=1;
        }
    }


    return sorted;

}
int main(){
    vector<int>a={8,10,2,1}; 
    vector<int>b; 
    b=mergesort(a);
    cout<<endl; 
    for(int i=0;i<size(a);i++){
        cout<<a[i]<<" "; 
    }
    return 0;
}