#include<iostream>
using namespace std;
class a {
    private:
    string user , net;
    long long pass , pas=12345678;
    int i=0;
    public:
    friend class b;
};
class b {
    public:
    void display() {
        cout<<"Welcome to JUA Network" <<endl <<endl;
    }

    void Select_network(a &ps) {

        cout<< "  " "JUBH001 (4G/5G)" <<endl;
        cout<< "  " "JUBH002 (4G/5G)" <<endl;
        cout<< "  " "JUBH003 (4G/5G)" <<endl;
        cout<< "  " "JUBH004 (4G/5G)" <<endl;
        cout<< "  " "JUBH005 (4G/5G)" <<endl;
        cout<< "  " "JUBH006 (5G)" <<endl;
        cout<< "  " "JUBH007 (5G)" <<endl;
        cout<< "  " "JUBH008 (5G)" <<endl;
        cout<< "  " "JUBH009 (5G)" <<endl;
        cout<< "  " "JUBH010 (5G)" <<endl <<endl;
        
        cout<<"Select Network :";
        cin>>ps.net;
        cout<<endl;
    }
    void answer(a &ps) {
        while(ps.i<3)
        {
        cout<<"Enter Username :";
        cin>>ps.user;
        cout<<"Enetr the Password :";
        cin>>ps.pass ;
        cout<<endl;
        if(ps.pass==ps.pas)
        {
            cout<< "Now you are connected to JUA network." ;
            break;
        }
        else 
        {
            cout<<"Loging Failed." <<endl<<endl;
            ps.i++;
        }
    }
    if (ps.i==3) 
    {
        cout<<"Blocked User ! " <<endl <<endl;
    }
  }
};
int main(){
    a ps;
    b pss;
    pss.display();
    pss.Select_network(ps);
    pss.answer(ps);
    return 0;
}
