#include <iostream>
int nowidth (int x, int w){
    
    if (x>0){
        w++;
        x = x/10;
        std::cout << x << " " ; 
        return nowidth(x,w);
        }
    std::cout<< "\n";
    return w;
        }
int main (){
    int w = 0; //width of the number 
    int x ;
    std::cin >> x;
    std::cout << nowidth(x,w);
    return 0; 
}
