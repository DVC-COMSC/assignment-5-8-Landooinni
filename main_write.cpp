#include <iostream>
#include <fstream>
using namespace std;
ifstream ifs("student.txt");
int main()
{
int N;

int score1,score2;
   string n;
   
    cin>>N;
    ifs.open("student.txt",std::ifstream::in);
    cout<<N<<"\n";
    ifs.close();
    for (size_t i = 0; i < N; i++)
    {
        cin >>n>> score1>>score2;
        ifs.open("student.txt");
        cout<<n<<"\n"<<score1<<"\n"<<score2<<"\n";
        ifs.close();
    }
    
    

}