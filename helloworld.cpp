#include <iostream>
#include <fstream>
#include<cstring>

int  main(int argc, char *argv[]){

    using namespace std;
    string st("Hello World!");

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
