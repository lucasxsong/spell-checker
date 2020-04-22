#include <iostream>
#include <fstream>
#include <algorithm>

// for mmap:
#include <sys/mman.h>
#include <sys/stat.h>
#include <fcntl.h>

using namespace std;

int main() {
    ifstream fin;
    fin.open("words.txt");
    if(!fin.good()){cout<<"No dictionary file!\n"; exit(1);}   

    return 0;
}
