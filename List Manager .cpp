#include <iostream>
#include <vector>

using namespace std;

int Print(vector<int> list){
    if(list.empty()){
        cout << "list is empty";
        return 0;
    }
    cout << "[ ";
    for(int num : list)
        cout << num << " ";
    cout << "]";
return 0;
}

vector<int> Edit(vector<int> list){
    if(list.empty()){
        cout << "list is empty";
        return list;
    }
    cout << "Enter 0 to Remove a number\nEnter 1 to Add a number\nEnter 2 to sort the list Small to large\nEnter 3 to sort the list Large to small\nEnter -1 to clear the list\n";
    int Command;
    cin >> Command;
    if ( Command == 1 ){ 
        int x ;
        vector<int> z = list;
        cout << "Enter the number that you want to add to list\n";
        cin >> x;
        for (int i :z){
            if(x == i){
                cout << "Already in the list";
                return list;
            }
        }
        z.push_back(x);
        cout << "\n" << x << " has been added to the list";
        return z;
    }
    if(Command == 0){
        cout << "Which number do you want to remove : \n";
        int x ;
        cin >> x ; 
        int z = list.size();
        for (int i = 0 ; i < z ; i++){
            if (list[i] == x)
                list.erase(list.begin() + i);
        }
        cout << x << " has been cleared";
        return list ;
    }
    if( Command == -1){
        list.clear();
        return list;
    }
    int x , z = list.size(); 
    if( Command == 3 ){
        for( int i = 0 ; i < z ; i++ ){
            for( int j = 0 ; j < z ; j++ ){
                if( list[i] > list[j]){
                    x = list [i];
                    list [i] = list [j];
                    list [j] = x;
                }
            }
        }
    }
    if( Command == 2 ){
        for( int i = 0 ; i < z ; i++ ){
            for( int j = 0 ; j < z ; j++ ){
                if( list[i] < list[j]){
                    x = list [i];
                    list [i] = list [j];
                    list [j] = x;
                }
            }
        }
    }
    cout << "List had been sorted";
    return list;
}

// vector<int> Remnum (vector<int> list){
//     cout << "Which number do you want to remove : \n";
//     int x ;
//     cin >> x ; 
//     int z = list.size();
//     for (int i = 0 ; i < z ; i++){
//         if (list[i] == x)
//             list.erase(list.begin() + i);
//     }
//     cout << x << " has been cleared";
//     return list ;
// }

// vector<int> Sort(vector<int> list){
//     cout << "For sorting increasingly (0 to 9 / A to Z) Enter : 0\nFor sorting decreasingly (9 to 0 / Z to A) Enter : 1\nEntering anything else will go back to the menu";
//     int x , z = list.size(); 
//     cin >> x ;
//     if( x == 1 ){
//         for( int i = 0 ; i < z ; i++ ){
//             for( int j = 0 ; j < z ; j++ ){
//                 if( list[i] > list[j]){
//                     x = list [i];
//                     list [i] = list [j];
//                     list [j] = x;
//                 }
//             }
//         }
//     }
//     else if( x == 0 ){
//         for( int i = 0 ; i < z ; i++ ){
//             for( int j = 0 ; j < z ; j++ ){
//                 if( list[i] < list[j]){
//                     x = list [i];
//                     list [i] = list [j];
//                     list [j] = x;
//                 }
//             }
//         }
//     }
//     return list;
// }

double Mean(vector<int> list){
    if(list.empty()){
        cout << "list is empty";
        return 0;
    }
    double sum = 0;
    double x = list.size();
    for (int i = 0 ; i < x ; i++){
        sum = list[i] + sum;
    }
    double avg ;
    avg = (sum / x) ;
    cout << "Here is the avrage of the list : "<< avg; 
    return 0;
}

int Lnum (vector<int> list){
    if(list.empty()){
        cout << "list is empty";
        return 0;
    }
    int x ;
    int z = list.size();
    for(int i = 0 ; i < z ; i++){
        if (x < list[i])
            x = list[i];
    }
    cout << "Largest number in the list is : " << x;  
    return 0 ;
}

int Snum (vector<int> list){
    if(list.empty()){
        cout << "list is empty";
        return 0;
    }
    int x = list.front() ;
    int z = list.size();
    for(int i = 0 ; i < z ; i++){
        if (x > list[i])
            x = list[i];
    }

    cout << "Smallest number in the list is : " << x; 
     
    return 0 ;
}

int main(){

    cout << "Hey i do stuff with a list of numbers";
    string x;
    vector<int> list = { 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 0 };
    while (true){
        cout << "\nP : Print the list \nE : Edit the list\nM : Calculate mean of the list\nS : Smallest number on the list\nL : Largest number on the list\nQ : Quit the program\nWhat should i do?\n";
        cin >> x;
        if(x == "P" || x == "p")
            Print(list);
        else if(x == "E" || x == "e")
            list = Edit(list);
        else if(x == "M" || x == "m")
            Mean(list);
        else if(x == "S" || x == "s")
            Snum(list);
        else if(x == "l" || x == "l")
            Lnum(list);
        else if(x == "Q" || x == "q")
            return 0;
        else 
            cout << "Unknown command try again"; 
    }

return 0;

}
