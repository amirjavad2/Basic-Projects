#include <iostream>
#include <random>
using namespace std;

int Price(int s){
    int min = 0, max = 10000;
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(min, max);
    s = dist(gen);
    return s;
}
string Product(int i){
        if (i % 5 == 0)
        return "Vacum";
        if (i % 4 == 0)
        return "Spresso Machine";
        if (i % 3 == 0)        
        return "AC";
        if (i % 2 == 0)     
        return "Heater";
        if (i % 1 == 0)        
        return "Washing machine";
}
int main(){
    string p[499];
    int s[499];
    int j = 1;
    for(int i = 0; i<500; i++){
       p[i] = Product(i);
       s[i] = Price(i);
        }
    for(int i = 0 ; i < 500 ; i++){ 
        if (s[i] > 1000 && s[i] < 5000 ){
            cout<< j << ": The " << p[i] << " is just "<< s[i]<< " MT\n";
            j++;
            }
    }
}
