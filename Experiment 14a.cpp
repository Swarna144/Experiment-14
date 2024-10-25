#include<iostream>
using namespace std;

int main(){
    class Uni{
        public:
        string uniName = "Symbiosis:";
        void discipline(){
            cout << "Engineering" << endl;
        }
    };
    
    class Dep : public Uni {
        public:
        string depName = "Electronics & Telecommunication";
    };
    
    Dep u1;
    u1.discipline();
    cout << u1.uniName + " " + u1.depName << endl;

    return 0;
}
