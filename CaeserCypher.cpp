//YOU HAVE TO MAKE A TEXT FILE WITH THE SECRET MESSAGE IN IT AND THEN WHILE RUNNING
// IT YOU HAVE TO DO  "./a.out -e 3 < f1.txt > f2.txt"
//IF THE SECRET MESSAGE IS IN F1.TXT FILE THEN ENCRYPTED TEXT WILL SAVE IN F2.TXT AND 3 IS THE SHIFT THAT
//YOU WANNA DO TO YOUR ALPHABETS.YOU CAN ALSO DECRYPT YOUR FILE USING -d INSTEAD OF -e.
#include <iostream>
#include <string>
#include <fstream>

using namespace std;
char encrypt(int c,int shift){
  int value;
value=65 + (((c-65) + shift) % 26);
return char(value);
}
string fullencrypt(string line,int shift){
  string full;
  int a;
  char c;
  for(int i=0;i<line.length();i++){
    if(line[i]==' '){
    full=full+' ';
    continue;
    }
  a=static_cast<int>(line[i]);
  if((a>64)&&(a<91)){
  //cout<<"k"<<endl
  c=encrypt(a,shift);

  full=full+c;
  }
  else
  {full=full+line[i];
    continue;}

  }

  return full;
}

int main(int argc,char* argv[]){
int shift=atoi(argv[2]);
int c;
char p;
string s;
char v;
string k="-e";
if(argv[1]==k){
shift=shift+26;
}
else{
shift=-shift+26;
}



while(!cin.eof())
{string line;
  getline(cin,line);
s=fullencrypt(line,shift);
//cout<<s<<endl;
//cout<<"k"<<endl;

cout<<s<<'\n';

//
//a='\0';
}



return 0;
}
