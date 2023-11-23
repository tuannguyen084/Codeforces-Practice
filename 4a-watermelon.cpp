#include <iostream>
 
int main() {    
    int k;
    std::cin >> k;
    if(k%2 ==0 && k != 2){
        std::cout << "YES";
    }
    else{
        std::cout << "NO";
    }
    return 0;
}