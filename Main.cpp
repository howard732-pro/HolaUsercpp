#include <iostream>

using namespace std;

int main(){
    string usuario;
    int edad;
    
    cout<<"I N G R E S E  S U  N O M B R E E"<<endl;
    cin>>usuario;
    cout<<"I N G R E S E  S U  E D A D"<<endl;
    cin>>edad;

    if (usuario != "" || usuario != " "){
        cout<<"H O L A A "<<usuario<<endl;
    }else{
        cout <<"H O L A  M U N D O"<<endl;
    }

}
