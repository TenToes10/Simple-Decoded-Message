// IN MY LLC ERA//
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
    string what = "y15oua2iare333do5i17nggr42622aaea226tat262t1ahisw232521jholepro1kgram1lmi4542uhn1hgth98071iing";
    int len = what.length();
    string done;
    for (int i = 0; i < len; i++){
        char c = what[i];
        if (c == '1'){
            ++i;
        }else if (c == '2'){
            i += 2;
        }else if(!isdigit(c)){
             done += c;
        }
    }
    cout << "Decoded message: " << done << endl;
    return 0;
}


//if c is 1 skip 1 and next, if c is 2 then skip 2 and next two characters//
//if c any other number skip//
//print c//