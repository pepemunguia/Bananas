#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int find_bananas (string ban){

  ifstream myfile("pepe.txt");
  int bananacount= 0;
  string line;
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
       transform(line.begin(),line.end(),line.begin(), ::tolower);
       int ban = line.find("banana");
       while (ban!=-1){
         bananacount++;
         ban = line.find("banana",ban+1);
       }
    }
  }
  return bananacount;
}

int main (){
  string ban  = "banana";
  cout<< "The number of banana in your file is: "<< find_bananas(ban) << endl;
  return 0;
}
