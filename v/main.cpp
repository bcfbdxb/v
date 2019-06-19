//
//  main.cpp
//  v
//
//  Created by s20181106118 on 2019/6/19.
//  Copyright © 2019 s20181106118. All rights reserved.
//

#include <iostream>
# include<fstream>
using namespace std;


int main(int argc, char*argv[]){
    int a,b;
    ifstream ou("/users/s20181106118/Desktop/ou.txt");
    ofstream ip("/users/s20181106118/Desktop/in.txt",ios_base::out);
    if(ip.is_open()){
        ip<<a<<b<<endl;
    }
    ip.close();
    return 0;
}
