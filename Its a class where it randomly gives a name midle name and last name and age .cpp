#include <iostream>
#include <random>
using namespace std;

static int clientsnumber = 0;
class person {
    string name;
    string midname;
    string lastname;
    int age;
    public:
        string fullname(string n,string m, string l){
            int min = 0,max = 10;
            random_device rd;
            mt19937 gen(rd());
            uniform_int_distribution<> dist(min, max);
            int non = dist(gen), nom = dist(gen) , nol = dist(gen);
            if(non == 1) // First name randomizing 
                n = "Alexander ";
            if(non == 2)
                n = "Olivia ";
            if(non == 3)
                n = "Benjamin ";
            if(non == 4)
                n = "Charlotte ";
            if(non == 5)
                n = "James ";
            if(non == 6)
                n = "Amelia ";
            if(non == 7)
                n = "Ethan ";
            if(non == 8)
                n = "Sophia ";
            if(non == 9)
                n = "Liam ";
            if(non == 10)
                n = "Emily ";
            if(nom == 1)// Middle name randomizing 
                m = "Grace ";
            if(nom == 2)
                m = "Michael ";
            if(nom == 3)
                m = "Rose ";
            if(nom == 4)
                m = "Thomas ";
            if(nom == 5)
                m = "Claire ";
            if(nom == 6)
                m = "Elizabeth ";
            if(nom == 7)
                m = "Daniel ";
            if(nom == 8)
                m = "Marie ";
            if(nom == 9)
                m = "Joseph ";
            if(nom == 10)
                m = "David ";
            if(nol == 1)// Last name randomizing 
                l = "Smith ";
            if(nol == 2)
                l = "Taylor ";
            if(nol == 3)
                l = "Johnson ";
            if(nol == 4)
                l = "Brown ";
            if(nol == 5)
                l = "Williams ";
            if(nol == 6)
                l = "Davis ";
            if(nol == 7)
                l = "Miller ";
            if(nol == 8)
                l = "Wilson ";
            if(nol == 9)
                l = "Anderson ";
            if(nol == 10)
                l = "Clark ";
        return n+m+l;
        };
        int Age(int a){
        int min = 18 , max = 60;
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<> dist(min, max);
        a = dist(gen);
        return a;
        }
