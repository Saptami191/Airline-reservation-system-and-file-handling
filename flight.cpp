#include <bits/stdc++.h>
using namespace std;

class Airline{
private:
string Flight,Des,Dep;
int Seats;

public:
Airline(string flight,string des,string dep,int seats){
    Flight=flight;
    Des==des;
    Dep=dep;
    Seats=seats;
    
}
string  getFlight(){
    return Flight;
}
string  getDes(){
    return Des;
}
string  getDep(){
    return Dep;
}
string  getSeats(){
    return Seats;
}
update(string flight){
    ifstream in("D:/Flight.txt");
    ofstream out("D:/Flight Temp .txt");
    string line;
    while(getline(in,line)){
        int pos= line.find(flight);
        if(pos != string:: npos){
            int current = Seats-1;
            seats=current;
            stringstream ss;
            ss<<current;
            string strCurrent = ss.str();
            int seatPos = line.find_last_of(':');
            line.replace(seatPos+2, string ::npos,strCurrent);
        }
        out<<line<<endl;
    }
    out.close();
    in.close();
    remove("D:/Flight.txt");
    rename("D:/Flight Temp .txt","D:/Flight.txt");
    cout<,"Reserved successfully"<<endl;
}

};
display(){
    ifstream in("D:/Flight.txt");
    if(!in){
        cout<<"Error: File cannot open!"<<endl;
    }
    else{
        string line;
        while(getline(in line)){
            cout<<line<<endl;
        }
    }
}
int main(){
    Airline flight1("F1001","UAE","INDIA",50);
    Airline flight2("F1002","JAPAN","INDIA",40);
    Airline flight3("F1003","GERMAN","INDIA",150);

    ofstream out("D:/Flight.txt");
if(!out){
    cout<<"Error: File can't open!"<<endl;
}
    else
    {
    out<<"\t"<<flight1.getFlight()<<" : "<<flight1.getDes()<<" : "<<flight1.getDep()<<" : "<<flight1.getSeats()<<" : "<<endl<<endl;
    out<<"\t"<<flight2.getFlight()<<" : "<<flight2.getDes()<<" : "<<flight2.getDep()<<" : "<<flight2.getSeats()<<" : "<<endl<<endl;
    out<<"\t"<<flight3.getFlight()<<" : "<<flight3.getDes()<<" : "<<flight3.getDep()<<" : "<<flight3.getSeats()<<" : "<<endl<<endl;


    cout<<"Data saved successfully!"<<endl;
    out.close();
    
    }
    bool exit = false;
    while(!exit){
        system("cls");  // for hiding previous output
         cout<<"\t welcome To Airline Management System"<<endl;
        cout<<"\t **************************************************** "<<endl;
        cout<<"\t 1.Reserve A seat "<<endl;
        cout<<"\t  2.Exit. "<<endl;
        cout<<:"\t 3. Enter your choice:";

        int val;
        cin >>val;

        if(val==1){
            system("cls");
            display();
            string flight;
            cout<<"Enter Flght No";
            cin>flight;
            if(flight==flight1.getFlight() && flight1.getSeats()>0){
                flight1.update(flight);
            }
            else if(flight1.getSeats() <= 0){
                cout<"Sorry, Seats not available"<<endl;
            }
        }
        
    }
}

