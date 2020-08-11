
#include<bits/stdc++.h>
#include<Windows.h>
using namespace std;
#define pi acos(-1.0)
//cout << fixed << setprecision(8) << a << endl;
//cout << "Case " << ca << ": " << ans << endl;
#define Fast_Input ios_base :: sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define MX 100005
#define infinity 20000000
#define pb push_back
#define ll long long int
stack < string > face;
stack < string > backward;
map <string,int>m;
int innings=0;
vector < int > v;
int me;
void gotoxy(int r,int n)
{
    COORD a;
    a.X=r;
    a.Y=n;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),a);
}

void BALL(int x)
{
    system ("color 5F");
    system("cls");
    innings++;
    int r,n;
    ll sum=0,k=0,w,ov=0;
    w=x;
    while(k!=2 && w>0)
    {
        for(int i=0; i<6; i++)
        {
            system("cls");
            int y;
            cout << "PLAY!!" << endl;
            if(innings==1)

                cout << "You are Balling" << endl;
            else

                cout << "You are Defending" << endl;
            cout << "Score: " << sum << "     " << "Wicket: " << k << "     " << "OVER: " << ov << "." << i << "     ";
            if(innings==2)
            {
                cout << "Target: " << v[0]-sum << endl;
            }
            else
                cout << endl;
            cin >> y;
            if(y>=1 && y<=6)
            {
                int ren=(rand()%6)+1;

                system("cls");
                cout << y << " " << ren << endl;
                if(y==ren)
                {
                    system("cls");
                    cout << "Great You have taken a wicket" << endl;
                    cout << "Enter 1 to Continue play" << endl;
                    int booo;
                    cin >> booo;
                    k++;
                    if(k==2)
                        break;
                }
                else
                {
                    system("cls");
                    cout << y << " " << ren << endl;
                    cout << "Press 1 to continue Play" << endl;
                    int boo;
                    cin >> boo;
                    sum+=ren;
                }
            }

            else
                i--;
        }
        w--;
        ov++;
    }

    v.push_back(sum);

    if(innings<2)
    {
        return;
    }

    else
    {
        int one,two;
        one=v[0];
        two=v[1];

        if(me==1)
        {
            if(one==two)
            {
                cout << "MATCH DRAWN" << endl;
            }

            else if(one>two)
            {
                cout << "Congratulation!! You have Won the Match!" << endl;
            }

            else
            {
                cout << "Sorry! You have lost the match" << endl;
            }

        }

        else
        {
            if(one==two)
            {
                cout << "MATCH DRAWN" << endl;
            }

            else if(one>two)
            {
                cout << "Sorry! You have lost the match" << endl;
            }

            else
            {
                cout << "Congratulation!! You have Won the Match!" << endl;
            }
        }
    }

    int pus;
    cin >> pus;

}
void BAT(int x)
{
    system ("color 5F");
    system("cls");
    innings++;
    int r,n;
    ll sum=0,k=0,w,ov=0;
    w=x;
    while(k!=5 && w>0)
    {
        system("cls");
        for(int i=0; i<6; i++)
        {
            system("cls");
            int y;
            cout << "PLAY!!" << endl;
            if(innings==1)
                cout << "You are Batting" << endl;
            if(innings==2)
                cout << "You are Chasing" << endl;

            cout << "Score: " << sum << "     " << "Wicket: " << k << "     " << "OVER: " << ov << "." << i << "    ";
            if(innings==2)
            {
                cout << "Target: " << v[0]-sum << endl;
            }
            if(innings==1)
                cout << endl;
            cin >> y;
            if(y>=1 && y<=6)
            {
                int ren=(rand()%6)+1;

                system("cls");
                cout << y << " " << ren << endl;
                if(y==ren)
                {
                    system("cls");
                    cout << "Ooops You have lost a Wicket" << endl;
                    cout << "Enter 1 to Continue play" << endl;
                    int booo;
                    cin >> booo;
                    k++;
                    if(k==2)
                        break;
                }
                else
                {
                    system("cls");
                    cout << y << " " << ren << endl;
                    cout << "Press 1 to continue Play" << endl;
                    int boo;
                    cin >> boo;
                    sum+=y;
                }
            }

            else
                i--;
        }
        w--;
        ov++;
    }

    v.push_back(sum);

    if(innings<2)
    {
        return;
    }

    else
    {
        int one,two;
        one=v[0];
        two=v[1];

        if(me==1)
        {
            if(one==two)
            {
                cout << "MATCH DRAWN" << endl;
            }

            else if(one>two)
            {
                cout << "Congratulation!! You have Won the Match!" << endl;
            }

            else
            {
                cout << "Sorry! You have lost the match" << endl;
            }
        }

        else
        {
            if(one==two)
            {
                cout << "MATCH DRAWN" << endl;
            }

            else if(one>two)
            {
                cout << "Sorry! You have lost the match" << endl;
            }

            else
            {
                cout << "Congratulation!! You have Won the Match!" << endl;
            }
        }
    }

    int pus;
    cin >> pus;
}
void Choose()
{
    system ("color 5F");
    system("cls");
    int r,n;
    gotoxy(30,10);
    cout << "1: BAT First" << endl;
    gotoxy(30,12);
    cout << "2: BALL First" << endl;
    int x;
    cin >> x;

    if(x==1)
    {
        me=1;
        gotoxy(30,14);
        cout << "Choose No.of overs" << endl;
        int y;
        gotoxy(30,16);
        cout << "Overs: ";
        cin >> y;
        BAT(y);
        BALL(y);
    }

    else
    {
        gotoxy(30,14);
        cout << "Choose No.of overs" << endl;
        int y;
        gotoxy(30,16);
        cout << "Overs: ";
        cin >> y;
        me=2;
        BALL(y);
        BAT(y);
    }
}
void Continue()
{
    system ("color 5F");
    system("cls");
    int r,n;
    gotoxy(45,8);
    cout << "Head or Tails?" << endl;
    gotoxy(30,10);
    cout << "1=HEAD" << endl;
    gotoxy(30,12);
    cout << "2=Tail" << endl;
    int x;
    cin >> x;
    int ren=rand()%2;

    if(x==ren)
    {
        Choose();
    }
    else
    {
        gotoxy(30,14);
        cout << "Opponent Won the Toss and choose to ";
        ren=rand()%1;
        if(ren==1)
        {
            gotoxy(30,16);
            cout << "BAT" << endl;
            gotoxy(30,18);
            cout << "Choose No.of overs" << endl;
            int y;
            gotoxy(30,20);
            cout << "Overs: ";
            cin >> y;
            me=2;
            BALL(y);
            BAT(y);
        }

        else
        {
            gotoxy(30,16);
            cout << "BALL" << endl;
            gotoxy(30,18);
            cout << "Choose No.of overs" << endl;
            int y;
            gotoxy(30,20);
            cout << "Overs: ";
            cin >> y;
            me=1;
            BAT(y);
            BALL(y);
        }
    }
}
void Help()
{
    system("color 5F");
    system ("cls");
    int r,n;
    gotoxy(30,8);
    cout<<"Match starts with a Toss."<<endl;
    gotoxy(30,10);
    cout<<"If You Win the toss you get choose what you wanna do first. Bat or Bowl?"<<endl;
    gotoxy(30,12);
    cout<<"If You Loose the opponent get to choose"<<endl;
    gotoxy(30,14);
    cout<<"During Match You can choose any Number in from 1 to 6."<<endl;
    gotoxy(30,16);
    cout<<"If Your and opponents Number matches. If you are batting you loose wicket"<<endl;
    gotoxy(30,18);
    cout<<"Else you take wicket"<<endl;
    gotoxy(30,20);
    cout<<"Your Target is to score more than your opponent."<<endl;
    gotoxy(30,22);
    cout<<"Enjoy the Game!!!"<<endl;
    gotoxy(30,24);
    cout << "1: Back" << endl;
    int x;
    cin >> x;

    if(x==1)
        return;
}
void Game(string name)
{
    system ("color 5F");
    system("cls");
    int r,n;
    gotoxy(45,8);
    cout << "Welcome " << name << " to our Sports Arena" << endl;
    gotoxy(30,10);
    cout << "1: Play" << endl;
    gotoxy(30,12);
    cout<<"2: How to Play"<<endl;
    gotoxy(30,14);
    cout << "3: Return Home" << endl;

    int x;
    cin >> x;

    if(x==1)
    {
        Continue();
    }
    if(x==2)
    {
        Help();
        Game(name);
    }
    else
    {
        return;
    }
}
void Lend(string name)
{
    system ("color 5F");
    system("cls");
    int r,n;
    gotoxy(30,10);
    cout << "Enter the book name: ";
    string s,y;
    cin >> s;
    gotoxy(30,12);
    cout << "Enter your Mobile Number: ";
    string t,line;
    cin >> t;
    y+=name;
    y+=' ';
    y+=t;
    ifstream file(s+".text");
    string z="",w;
    int i,ig=0;
    while(getline(file,line))
    {
        w="";
        for(i=0; i<line.size(); i++)
        {
            w+=line[i];
        }

        if(ig==0)
        {
            if(w==y)
            {
                ig=1;
            }
            else
            {
                z+=w;
                z+='#';
            }
        }
        else
        {
            z+=w;
            z+='#';
        }
    }

    ofstream file2;
    file2.open(s+".text");

    for(i=0; i<z.size(); i++)
    {
        if(z[i]=='#')
        {
            file2 << endl;
        }

        else
        {
            file2 << z[i];
        }
    }

    ofstream file3;
    file3.open("book.text",ios::out|ios::app);
    file3 << s << " " << "-" << endl;
    gotoxy(30,14);
    cout<< "1: Back" << endl;
    int x;
    cin >> x;
    if(x==1)
        return;

}
void Edit(string name)
{
    system ("color 5F");
    system("cls");
    int r,n;
    ofstream file;
    file.open(name+".text");
    string email;
    string mobile;
    string department;
    string batch;
    string ID;
    string password;
    gotoxy(30,10);
    cout << "Enter Your Email: ";
    cin >> email;
    gotoxy(30,12);
    cout << "Enter Your Mobile Number: ";
    cin >> mobile;
    gotoxy(30,14);
    cout << "Enter Your Department Name: ";
    cin.ignore();
    getline(cin,department);
    gotoxy(30,16);
    cout << "Enter Your Batch Number: ";
    cin >> batch;
    gotoxy(30,18);
    cout << "Enter Your ID Number: ";
    cin >> ID;
    gotoxy(30,20);
    cout << "Enter Your Password: ";
    cin >> password;
    file << email << endl;
    file << mobile << endl;
    file << department << endl;
    file << batch << endl;
    file << ID << endl;
    file << password << endl;
    file.close();
    gotoxy(30,22);
    cout<< "Edit was Successful" << endl;
    gotoxy(30,24);
    cout << "1: Back:" << endl;
    int x;
    cin >> x;

    if(x==1)
        return;
}
void Buy()
{
    system ("color 5F");
    system("cls");
    int r,n;
    gotoxy(30,10);
    cout << "Enter the book name you want to borrow" << endl;
    string s;
    gotoxy(30,12);
    cin.ignore();
    getline(cin,s);
    int c=0;
    ifstream file3(s+".text");
    string line;
    system("cls");
    int bu=14;
    int i;
    while(getline(file3,line))
    {
        gotoxy(30,bu);
        for(i=0; i<line.size(); i++)
        {
            if(line[i]!='0')
                cout << line[i];

            else
            {
                break;
            }
        }
        gotoxy(30,bu+1);
        cout << "Contact Number: ";
        int j;
        for(j=i; j<line.size(); j++)
        {
            cout << line[j];
        }
        gotoxy(30,bu+3);
        cout << "************************" << endl;
        c++;
        bu+=4;
    }

    if(c==0)
    {
        gotoxy(30,14);
        cout << "No Book Found with this name" << endl;
    }
    gotoxy(30,bu+2);
    cout << "1: Back" << endl;
    int x;
    cin >> x;

    if(x==1)
        return;
}
void List()
{
    system ("color 5F");
    system("cls");
    int i,c=0;
    int r,n;
    ifstream file3("book.text");
    string line,s="";

    while(getline(file3,line))
    {
        s="";

        for(i=0; i<line.size(); i++)
        {
            if(line[i]=='+' || line[i]=='-')
                break;
            else
                s+=line[i];
        }
        if(line[i]=='+')
            m[s]++;
        else
            m[s]--;
    }

    int bu=10;
    for(auto x:m)
    {
        if(x.second>0)
        {
            gotoxy(30,bu);
            cout << x.first << endl;
            gotoxy(30,bu+1);
            cout << "No of Books: " << x.second << endl;
            gotoxy(30,bu+3);
            cout << "*************************************" << endl;
            c++;
            bu+=4;
        }
    }

    if(c==0)
    {
        system("cls");
        gotoxy(30,bu+2);
        cout << "No available books to Borrow" << endl;
    }
    gotoxy(30,bu+2);
    cout << "1: Back" << endl;
    int x;
    cin >> x;

    if(x==1)
        return;


}
void Borrow(string name)
{
    system ("color 5F");
    m.clear();
    system("cls");
    int r,n;
    gotoxy(30,10);
    cout << "1: Check All Available Books" << endl;
    gotoxy(30,12);
    cout << "2: Borrow a Book" << endl;
    gotoxy(30,14);
    cout << "3: Back" << endl;
    int x;
    cin >> x;
    if(x==1)
    {
        List();
        Borrow(name);
    }

    else if(x==2)
    {
        Buy();
        Borrow(name);
    }

    else
    {
        return;
    }
}
void Donate(string name)
{
    system ("color 5F");
    system("cls");
    int r,n;
    gotoxy(30,10);
    cout << "Enter the Book Name: ";
    string b,line;
    cin.ignore();
    getline(cin,b);
    ofstream file;
    file.open("book.text",ios::out|ios::app);
    file << b << " " << "+" << endl;
    ofstream file2;
    file2.open(b+".text",ios::out|ios::app);
    ifstream file3(name+".text");
    int c=1;
    while(getline(file3,line))
    {
        if(c==2)
            file2 << name << " " << line << endl;
        c++;
    }

    file.close();
    file2.close();
    file3.close();
    gotoxy(30,12);
    cout<< "1: Donate more Books" << endl;
    gotoxy(30,14);
    cout << "2: Back" << endl;
    int x;
    cin >> x;

    if(x==1)
    {
        Donate(name);
    }
    else
    {
        return;
    }
}
void Home(string name)
{
    system ("color 5F");
    system("cls");
    int r,n;
    gotoxy(45,8);
    cout << "Welcome " << name << "!" << endl;
    gotoxy(30,10);
    cout << "1: Borrow Book" << endl;
    gotoxy(30,12);
    cout << "2: Donate Book" << endl;
    gotoxy(30,14);
    cout << "3: Confirm Donation(If someone has taken book from you,let us know)" << endl;
    gotoxy(30,16);
    cout << "4: Edit Info" << endl;
    gotoxy(30,18);
    cout << "5: Game" << endl;
    int x;
    cin >> x;

    if(x==1)
    {
        Borrow(name);
        Home(name);
    }

    else if(x==2)
    {
        Donate(name);
        Home(name);
    }

    else if(x==3)
    {
        Lend(name);
        Home(name);
    }
    else if(x==4)
    {
        Edit(name);
        Home(name);
    }

    else
    {
        Game(name);
        Home(name);
    }

}
void LogIn()
{
    system ("color 5F");
    system("cls");
    int r,n;
    gotoxy(30,10);
    cout << "Enter Valid Informations to Log In" << endl;
    gotoxy(30,12);
    cout << "Name: ";
    string name,line;
    cin.ignore();
    getline(cin,name);
    gotoxy(30,14);
    cout << "Enter Email: ";
    string e,pa;
    cin >> e;
    gotoxy(30,16);
    cout << "Enter Password: ";
    cin >> pa;
    ifstream file(name+".text");

    int c=1,log=0,em=0,p=0;
    while(getline(file,line))
    {
        if(c==1)
        {
            if(e==line)
            {
                log++;
                em=1;
            }
        }

        if(c==6)
        {
            if(pa==line)
            {
                log++;
                p=1;
            }
        }
        c++;
    }

    system("cls");

    if(c==1)
    {
        gotoxy(30,10);
        cout << "No Such Accout is found" << endl;
        gotoxy(30,12);
        cout << "1: Back" << endl;
        int x;
        cin >> x;
        if(x==1)
            return;
    }
    if(em==0 && p==0)
    {
        gotoxy(30,10);
        cout << "Incorrect Email and Password" << endl;
        gotoxy(30,12);
        cout << "Press 1 to Retry" << endl;
        int x;
        cin >> x;

        if(x==1)
        {
            LogIn();
        }
    }

    else if(em==0 && p==1)
    {
        gotoxy(30,10);
        cout << "Incorrect Email" << endl;
        gotoxy(30,12);
        cout << "Press 1 to Retry" << endl;
        int x;
        cin >> x;

        if(x==1)
        {
            LogIn();
        }
    }

    else if(em==1 && p==0)
    {
        gotoxy(30,10);
        cout << "Incorrect Password" << endl;
        gotoxy(30,12);
        cout << "Press 1 to Retry" << endl;
        int x;
        cin >> x;

        if(x==1)
        {
            LogIn();
        }
    }

    else
    {
        Home(name);
    }

}
void SignUp()
{
    system ("color 5F");
    system("cls");
    int r,n;
    ofstream file;
    gotoxy(30,10);
    cout << "Enter your name: ";
    cin.ignore();
    string s;
    getline(cin,s);
    file.open(s+".text");

    string email;
    string mobile;
    string department;
    string batch;
    string ID;
    string password;
    gotoxy(30,12);
    cout << "Enter Your Email: ";
    cin >> email;
    gotoxy(30,14);
    cout << "Enter Your Mobile Number: ";
    cin >> mobile;
    gotoxy(30,16);
    cout << "Enter Your Department Name: ";
    cin.ignore();
    getline(cin,department);
    gotoxy(30,18);
    cout << "Enter Your Batch Number: ";
    cin >> batch;
    gotoxy(30,20);
    cout << "Enter Your ID Number: ";
    cin >> ID;
    gotoxy(30,22);
    cout << "Enter Your Password: ";
    cin >> password;
    file << email << endl;
    file << mobile << endl;
    file << department << endl;
    file << batch << endl;
    file << ID << endl;
    file << password << endl;
    file.close();
    gotoxy(30,26);
    cout << "Sign Up Successful" << endl;
    gotoxy(30,27);
    cout << "Press 1 to Log In" << endl;
    int j;
    cin >> j;
    if(j==1)
        LogIn();

}
void First()
{
    system ("color 5F");
    int r,n;
    gotoxy(45,8);
    cout<<"Library Management System from Tanzina"<<endl;
    gotoxy(30,10);
    cout << "1: Log In" << endl;
    gotoxy(30,12);
    cout << "2: Sign Up" << endl;
    int x;
    cin >> x;
    if(x==1)
    {
        LogIn();
        First();
    }

    else
    {
        SignUp();
    }
}
int main()
{
    system ("color 5F");
    First();
    return 0;
}
