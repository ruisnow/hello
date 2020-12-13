#include <iostream>
#include <fstream>
#include <cstring>

#define CREAT_STRING(key) string key;
#define SET_STRING(key,value) key = value;
using namespace std;

int  main(int argc, char *argv[]){

    CREAT_STRING(hello);
    SET_STRING(hello,"hello,world!--this is marco define")
    string st(hello);
    
    //string st("Hello World!");

    cout << "hello world" << endl;
    cout << st << endl;   


    ifstream fin;
    fin.open("tobuy.txt");
    if(fin.is_open() == false)
    {
        cerr << "Can't open file. Bye.\n";
        exit(EXIT_FAILURE);
    }
    string item;
    int count = 0;
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
