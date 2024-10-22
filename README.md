# Experiment-14
Aim:
To study and implement inheritance.

Theory:
The child class can inherit properties, characteristics from another class called the parent class. This fundamental object-oriented programming principle known as inheritance.
There are three inheritance modes:
→ Public Inheritance.
→ Private Inheritance.
→ Protected Inheritance.

Public Inheritance:
When a class is derived using public inheritance, the public and protected members of the base class remain public and protected in the derived class, respectively.

Protected Inheritance:
In protected inheritance, the public and protected members of the base class become protected members of the derived class.

Private Inheritance:
In private inheritance, the public and protected members of the base class become private members of the derived class.


There are mainly 4 types of inheritance. They are:
Single Inheritance:
A derived class inherits from a single parent class.
Multiple Inheritance
A derived class inherits from more than one parent class.
Multilevel Inheritance:
A class is derived from another child class.
Hierarchical Inheritance:
Multiple child classes inherit from the same parent class

CODE:-

14a

```

# include <iostream>
# include <string>
using namespace std;

//single inheritance
class uni
{
    public:
    string uni = "Symbiosis";
    void course()
    {
        cout<<"B. Tech ";
    }
};
class branch: public uni
{
    public:
    string branch = " Electronics and Telecommunication ";

};

int main()
{
    branch b1;
    cout<<b1.uni<<endl;
    b1.course();
    cout<<b1.branch;
}
```

14b
```
# include <iostream>
# include <string>
using namespace std;

//multiple inheritance
class mammal
{
    public:
    string mammal = "Kingdom Mammalia";
    void exp()
    {
        cout<<"Exceptions: ";
    }
};
class aquatic
{
    public:
    string aqua = "Species living in the water ";

};

class walrus:public aquatic,public mammal
{
    public:
    string wallie = "Walrus are mammals which are aquatic ";

};
int main()
{
    walrus b1;
    cout<<b1.mammal<<endl;
    b1.exp();
    cout<<b1.wallie;
}
```
14c
```
# include <iostream>
# include <string>
using namespace std;

//multilevel inheritance
class kingdom
{
    public:
    string hum = "Human Classification";
    void king()
    {
        cout<<"Kingdom: Animalia ";
    }
};
class phylum: public kingdom
{
    public:
    string phy = "Phylum: Cordata ";

};

class classs:public phylum
{
    public:
    string cla = "Class: Mammalia ";

};
class order:public classs
{
    public:
    string ord = "Order: Primates ";

};
class family:public order
{
    public:
    string fam = "Family: Homonidae";

};
class genus:public family
{
    public:
    string gen = "Genus: Homo";

};
class species:public genus
{
    public:
    string spe = "Species: Species";

};
int main()
{
    species h1;
    cout<<h1.hum<<endl;
    h1.king();
    cout<<endl;
    cout<<h1.phy<<endl;
    cout<<h1.cla<<endl;
    cout<<h1.ord<<endl;
    cout<<h1.fam<<endl;
    cout<<h1.gen<<endl;
    cout<<h1.spe<<endl;


}
```

14d
```
# include <iostream>
# include <string>
using namespace std;

//hierarchical inheritance
class fivekingdom
{
    public:
    string fiv = " is one of the kingdoms in the 5 Kingdom Classification";

};
class animalia: public fivekingdom
{
    public:
    string ani = "Animalia";

};
class monera: public fivekingdom
{
    public:
    string mon = "Monera";

};
class protists: public fivekingdom
{
    public:
    string pro = "Protists";

};
class fungi: public fivekingdom
{
    public:
    string fun = "Fungi";

};
class plantae: public fivekingdom
{
    public:
    string pla = "Plantea";

};
int main()
{
    animalia k1;
    monera k2;
    protists k3;
    fungi k4;
    plantae k5;

    
    cout<<k1.ani;
    cout<<k1.fiv<<endl;

    cout<<k2.mon;
    cout<<k1.fiv<<endl;

    cout<<k3.pro;
    cout<<k1.fiv<<endl;

    cout<<k4.fun;
    cout<<k1.fiv<<endl;
    
    cout<<k5.pla;
    cout<<k1.fiv<<endl;


}
```

OUTPUT:-

14a

![Ex 14a JPG](https://github.com/user-attachments/assets/c6c3c95f-06dc-4ebc-a216-43d453713ecc)

14b

![Ex 14b JPG](https://github.com/user-attachments/assets/2e615dac-a8bc-4ec7-8393-2db44382505e)

14c

![Ex 14c JPG](https://github.com/user-attachments/assets/bbdce7be-c324-4b60-b2d1-2b177c1ce3ac)

14d

![Ex 14d JPG](https://github.com/user-attachments/assets/872900b4-d9c4-4934-a5f9-4a663aa913fa)

CONCLUSION- 

1)We learnt about inheritance in C++.

2) We learnt the types and modes of inheritance in C++.
