//
//  main.cpp
//  String
//
//  Created by Mohadeseh Delavarian on 2/17/21.
//  Copyright © 2021 Mohadeseh Delavarian. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    char a[50],b[50];

    //1 using gets
    gets(a);
    cout<<strlen(a)<<endl;
    puts(a);
    cout<<1<<endl;

    // 2 using getline for string (OOP)
    string c;
    getline(cin,c);
    cout<<c<<endl;
    cout<<2<<endl;

    //3 using getline for char array
    char f[100];
    cin.getline(f, 30);
    cout<<f<<endl;
    cout<<3<<endl;

    //4 using scanf sensetive to space
    char s[100];
    scanf("%s", s);
    printf("%s\n",s);
    cout<<s<<endl;
    cout<<4<<endl;
        
    //5 using cin JUST ONE WORD DO NOT USE SPACE
    cin>>b;
    cout<<strlen(b)<<endl;
    cout<<b<<endl;
    cout<<5<<endl;
    
    if (strcmp(a,b))
        cout<<"equal"<<endl;
    else
        cout<<"not equal"<<endl;
    
    return 0;
    
}
