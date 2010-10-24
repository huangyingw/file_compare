#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
  ifstream ifs1("data1.txt");
  ifstream ifs2("data2.txt");
  ofstream ofs("result.txt");
  string line1;
  string line2;
  bool equal=true;
  while (!ifs2.eof())
  {
    getline(ifs2,line2);
    while (!ifs1.eof()) {
      getline(ifs1,line1);
      if (line1!=line2) {
        cout<<line2<<endl;
        equal=false;
        ofs << line1;
        ofs << "\n";
      }
      else {
      }
    }
  }
  if(equal) cout<<"they are the same"<<endl;
  return 0;
}
