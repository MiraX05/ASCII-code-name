#include<iostream>


using namespace std;

int main (){

    int x=0,i=0;

    while(i<4){
i++;
        for (int h=4; h!=x; h=h-1){

            cout << " * ";
            cout<<h;
        }
        x=x+1;
        cout<<h;
        cout<<endl;
    }

    return 0;
}
