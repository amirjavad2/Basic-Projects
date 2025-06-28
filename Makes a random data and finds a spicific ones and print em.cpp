
class Client : public  person {
    string address;
    public : 
    string getaddress(){
        int min = 1 , max = 10;
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<> dist(min, max);
        int non = dist(gen);
            if(non == 1) // address name randomizing 
                return "Tehran ";
            if(non == 2)
                return "Mashhad ";
            if(non == 3)
                return "Isfahan ";
            if(non == 4)
                return "Tabriz ";
            if(non == 5)
                return "Aliabad ";
            if(non == 6)
                return "Sari ";
            if(non == 7)
                return "Rasht ";
            if(non == 8)
                return "Hamedan ";
            if(non == 9)
                return "Shiraz ";
            if(non == 10)
                return "Bandarabas ";
    }
    int cnum(){
        clientsnumber++;
        return clientsnumber;
    }
};
int main (){
    Client Resturants;
    string ad;
    for(int i = 0; i < 40 ; i++){
    string ad = Resturants.getaddress();
    if( ad == "Mashhad " )
    cout<< Resturants.cnum() <<" : Mr/Mrs " << Resturants.fullname("Amir ","Ali ","Mohsenzade ") << Resturants.Age(0) << " years old From " << "Mashhad " << endl;
    if( ad == "Isfahan " )
    cout<< Resturants.cnum() <<" : Mr/Mrs " << Resturants.fullname("Amir ","Ali ","Mohsenzade ") << Resturants.Age(0) << " years old From " << "Isfahan " << endl;
    }
}
