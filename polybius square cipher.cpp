#include <iostream>
#include <string>
using namespace std;
int a, b, c, d, e, choose;
char n1, n2, n3, n4, n5;
string word, wordd;

void encryption_function(){

    // here the user input the numbers in order he want
    cout<<"please enter the numbers: ";
    cin>>a>>b>>c>>d>>e;
    // print the table with numbers that the user enter    
    cout<<" "<<"|"<<a<<"|"<<b<<"|"<<c<<"|"<<" "<<d<<" "<<"|"<<e<<endl;
    cout<<a<<"|"<<"A"<<"|"<<"B"<<"|"<<"C"<<"|"<<" "<<"D"<<" "<<"|"<<"E"<<endl;
    cout<<b<<"|"<<"F"<<"|"<<"G"<<"|"<<"H"<<"|"<<"I"<<"/"<<"J"<<"|"<<"K"<<endl;
    cout<<c<<"|"<<'L'<<"|"<<"M"<<'|'<<'N'<<'|'<<" "<<'O'<<" "<<'|'<<'P'<<endl;
    cout<<d<<'|'<<'Q'<<'|'<<'R'<<'|'<<'S'<<'|'<<" "<<'T'<<" "<<'|'<<'U'<<endl;
    cout<<e<<'|'<<'V'<<'|'<<'W'<<'|'<<'X'<<'|'<<" "<<'Y'<<" "<<'|'<<'Z'<<endl; 


    cout<<"please enter the word you want to encrypt: ";
        cin.ignore();
        getline(cin, word);

        for (int i = 0; i < word.length(); i++)
        {
            switch (word.at(i))
        {
        case ' ': cout<<' ';
        break;
        case 'a': cout<<a<<a;
        break;
        case 'b': cout<<b<<a;
        break;
        case 'c': cout<<c<<a;
        break;
        case 'd': cout<<d<<a;
        break;
        case 'e': cout<<e<<a;
        break;
         case 'f': cout<<a<<b;
        break;
         case 'g': cout<<b<<b;
        break;
         case 'h': cout<<c<<b;
        break;
         case 'i': cout<<d<<b;
        break;
         case 'j': cout<<d<<b;
        break;
         case 'k': cout<<e<<b;
        break;
         case 'l': cout<<a<<c;
        break;
         case 'm': cout<<b<<c;
        break;
         case 'n': cout<<c<<c;
        break;
         case 'o': cout<<d<<c;
        break;
         case 'p': cout<<e<<c;
        break;
         case 'q': cout<<a<<d;
        break;
         case 'r': cout<<b<<d;
        break;
         case 's': cout<<c<<d;
        break;
         case 't': cout<<d<<d;
        break;
         case 'u': cout<<e<<d;
        break;
         case 'v': cout<<a<<e;
        break;
         case 'w': cout<<b<<e;
        break;
         case 'x': cout<<c<<e;
        break;
         case 'y': cout<<d<<e;
        break;
         case 'z': cout<<e<<e;
        break;

        }
            
        }

}

void decryption_function(){
     // here the user input the numbers in order he want
    cout<<"please enter the numbers: ";
    cin>>n1>>n2>>n3>>n4>>n5;
    // print the table with numbers that the user enter    
    cout<<" "<<"|"<<n1<<"|"<<n2<<"|"<<n3<<"|"<<n4<<"|"<<n5<<endl;
    cout<<n1<<"|"<<"A"<<"|"<<"B"<<"|"<<"C"<<"|"<<"D"<<"|"<<"E"<<endl;
    cout<<n2<<"|"<<"F"<<"|"<<"G"<<"|"<<"H"<<"|"<<"I"<<"|"<<"K"<<endl;
    cout<<n3<<"|"<<'L'<<"|"<<"M"<<'|'<<'N'<<'|'<<'O'<<'|'<<'P'<<endl;
    cout<<n4<<'|'<<'Q'<<'|'<<'R'<<'|'<<'S'<<'|'<<'T'<<'|'<<'U'<<endl;
    cout<<n5<<'|'<<'V'<<'|'<<'W'<<'|'<<'X'<<'|'<<'Y' <<'|'<<'Z'<<endl;

    char table[6][6] = {
        {' ',n1,n2,n3,n4,n5},
        {n1,'A','B','C','D','E'},
        {n2,'F','G','H','I','K'},
        {n3,'L','M','N','O','P'},
        {n4,'Q','R','S','T','U'},
        {n5,'V','W','X','Y','Z'}
    };

    cout<<"please enter the word you want to decrypt: ";
    cin.ignore();
    getline(cin, wordd);
    string decoded_word = "";
    for(int i=0;i<wordd.length();i+=2){
        for (int j = 0; j < 6; j++){
            for (int k = 0; k < 6; k++){
                if (wordd[i] == table[j][0])
                {
                    int column = j;
                    if (wordd[i+1] == table[0][k])
                    {
                        int row = k;
                        decoded_word += table[row][column];
                    }
                    
                }
                  
                
            }
            
        }
    
    }
    cout<<"the decoded word is "<<decoded_word;
    
}


int main()
{
    cout<<"for encrypt enter 1 and for decrypt enter 2: ";
    cin>>choose;

    if (choose == 1)
    {
        encryption_function();
    }
    else if (choose == 2)
    {
        decryption_function();
    }
    
            
}

