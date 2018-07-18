 #include <iostream>
#include <string>
using namespace std;
class Encode
{
    string s1,s2,s;
    int n,n2,i=0,j=0,c,t;
    public:
      Encode()
    {
        get();
    encode();
        }
    void get()
    {
        cout<<"Input:"<<endl;
        cin>>s1>>s2;
        }
        void encode()
        {
            cout<<"OUTPUT\n";
            n=s1.length();
            n2=s2.length();
            if(n==n2)
            {
            for(i=0;i<n;i++)
            {
               t=s2[i]+s1[i];
               t=t-96;
               if(t<=122)
               { char c=t;
               cout<<c;
               }
               else
                {
                char c=t-26;
                cout<<c;
                }
                }
            }
            else
            {
            cout<<"Unmatched number of characters in the 2 strings";
            }
            }
    };
int main()
{
    Encode e;
return 0;
}
