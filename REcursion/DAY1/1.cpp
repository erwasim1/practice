//fact
#include <iostream>
using namespace std;
int sumation=0;
int fact (int n){
    
    if(n==1)return 1;
    return n*fact(n-1);
   
    
}

int main() {
    int ans=fact(5);
    cout<<ans;
	
}
//fibonachi
#include <iostream>
using namespace std;
int fibo (int n){
    
    if(n==0 or n==1)return 1;
    
    return fibo(n-2)+fibo(n-1);
   
    
}

int main() {
    int ans=fibo(6);
    cout<<ans;
	
} 

// #include <iostream>
using namespace std;
int fibo (int n){
    
    if(n<=1)
    return n;
    
    int last=fibo(n-1);
    int slast=fibo(n-2);
    return last+slast;
   
    
}

int main() {
    int ans=fibo(6);
    cout<<ans;
	
} 