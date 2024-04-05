#include <iostream>
#include <fstream>
using namespace std;

struct computer {
    long int val=0;//holds sum of all connected node indexes
    int count= 0;// nr of directly linked nodes
};

int main(){
    fstream f("server.i1", ios::in);
    fstream fout("server.out", ios::out);

    int serverCount;//datoru skaits tīklā
    int input1,input2;//datori starp kuriem ir saite

    f>>serverCount;
    computer* servers = new computer[serverCount];
    //cout<<serverCount<<endl;
    f>>input1>>input2;
    //cout<<input1<<" "<<input2<<endl;

    
    while(input1&&input2){//while input not = to 0 0, do loop
        //cout<<input1<<" "<<input2<<endl;
        
        
        
        
        f>>input1>>input2;
    }
}
