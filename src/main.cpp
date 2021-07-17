#include <iostream>
#include <fstream>
#include <cstring>

#define CREAT_STRING(key) string key
#define SET_VALUE(key,value) key = value
using namespace std;

int  main(int argc, char *argv[]){

// 1 marco define demo
    CREAT_STRING(hello);
    SET_VALUE(hello,"hello,world!--this is marco define");
    cout << hello << endl;   
    //string st(hello);
    // cout << st << endl;   
  

// 2 file demo
    ifstream fin;
    fin.open("tobuy.txt");
    if(fin.is_open() == false)
    {
        cerr << "Can't open file. Bye.\n";
        exit(EXIT_FAILURE);
    }
    int count = 0;
    string item;
    getline(fin, item, ':');
    while(fin)
    {
        ++count;
        cout << count << ": " << item << endl;
        getline(fin, item, ':');
    }

    cout << "Done\n";
    fin.close();

    return 0;
}
