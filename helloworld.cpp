#include <iostream>
#include <fstream>
#include<cstring>

#define CREAT_STRING(key) string key;
#define SET_SRTING(key,value) key = value;

int  main(int argc, char *argv[]){

    using namespace std;
    
    CREAT_STRING(hello);
    SET_SRTING(hello,"hello,world!--this is marco define")
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
