#include <iostream>
#include <fstream>
using namespace std;

struct computer {
    long int val=0;//holds sum of all connected node indexes
    int count= 0;// nr of directly linked nodes
};

int main(){
    fstream f("server.in", ios::in);
    fstream fout("server.out", ios::out);

    int serverCount;//datoru skaits tīklā
    int input1=0,input2=0;//datori starp kuriem ir saite

    f>>serverCount;
    computer* servers = new computer[serverCount+1];
    int* queue = new int[serverCount];//queue that will hold leaf nodes

    f>>input1>>input2;

    while(input1&&input2){//while input not = to 0 0, do loop
        servers[input1].count++;
        servers[input2].count++;
        servers[input1].val += input2;
        servers[input2].val += input1;
        
        f>>input1>>input2;
    }
    //find leaf nodes - computers with only 1 connection and put the node in queue
    int queueEnd=0;//end for current queue
    int queueEndNext=0;// end for next iteration queue
    for(int i=1;i<=serverCount;i++){
        if(servers[i].count==1)queue[queueEnd++]=i;//add to queue and increase queueEnd index
    }
    //iterate though queue, "delete" leaf nodes, and create next queue
    int index;
    bool notFound=true;
    int distance=0;//distance from center to furthest end node in network
    while(notFound){//while center not found
    distance++;
    
    for(int i=0;i<queueEnd;i++){
        index=queue[i];
        //delete node from connected node
        servers[servers[index].val].count-=1;
        servers[servers[index].val].val-=index;
        //if next node has only 1 connection left then add it to queue
        if(servers[servers[index].val].count==1)queue[queueEndNext++]=servers[index].val;
    }
    if(queueEndNext<2){//center found
        if(queueEndNext){// if 1
            fout<<distance<<endl<<queue[0];
            notFound=false;
            break;
        }
        else{// if 0
            fout<<distance<<endl<<queue[0]<<" "<<queue[1];
            notFound=false;
            break;
        }
    }
    queueEnd=queueEndNext;
    queueEndNext=0;
    }
    delete[] queue;
    delete[] servers;
    return 0;
}