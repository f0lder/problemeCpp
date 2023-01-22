#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double f;
    

    for(int i=1;i<=n;i++){
        if(i%2 == 0){
            f-=1.0/i;
        }
        else{
            f+=1.0/i;
        }
    }
    cout << "S=1-1/2+1/3-1/4+...(-1)/(n-1)*1/n = "<< f;
    return 0;
}