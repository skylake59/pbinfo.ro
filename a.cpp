#include <iostream>
#include <cstring>
using namespace std;

int main(){
char s[256];
cin.getline(s,256);
for(char * p = s+strlen(s)-2; p>=s;--p)
if(strchr("aeiou",p[0]) && strchr("aeiou",p[1])){
if(p>s && strchr("aeiou",p[-1]))
strcpy(p,p+1);
else
strcpy(p,p+2);
}
cout << s << endl;
return 0;
}
