```cpp
#include <iostream>  // to use *cout*
using namespace std ;  //to use names for obj and vars from std lib.
int main()
{
  cout << "yall my first c++ prg";
return 0;
}
```

```cpp
#include <iostream>  
int main()
{
 std ::cout << "yall my first c++ prg"  ;  // vomit namespace

int y;
cin >> y;

std :: cout << "yoyoyo \n" <<y <<" uuuuu";
return 0;
}
```

Variables : int || double || char || string || bool

### Classes :

```cpp
#include<iostream>
#include<string>    //note this while using string
using namespace std;  // this have to be there for a string
class Sat
{
    public:      // access specifier
    int a;     //attributes
    string b;
};

int main()
{
    Sat ob;
    ob.a=1;
    ob.b="satu";
    
    std :: cout<< ob.a << ob.b ;
  
}
```

### Methods:

```cpp
#include<iostream>
#include<string>
using namespace std;
class Sat
{
    public:      // access specifier
    int a;     //attributes
    string b;
    
    void func1()
    {
        cout<< "Its internally defined func\n";
    }
    
    void func2();
};

  void Sat::func2()
  {
      cout<< "Its externally defined func\n";
  }

int main()
{
    Sat ob;
    ob.a=1;
    ob.b="satu";
    
    std :: cout<< ob.a <<"\n"<< ob.b<<"\n" ;
    ob.func1();
    ob.func2();
return 0;
}
```

### Constructors:

```cpp
#include<iostream>
#include<string>
using namespace std;
class Sat
{
    public:      // access specifier
    int a;     //attributes
    string b;
    
    Sat(int x, string y)
    {
        a=x;
        b=y;
    }
};

int main()
{
    Sat ob(10,"hahaha");
    
    std :: cout<< ob.a <<"\n"<< ob.b<<"\n" ;
    
return 0;
} 
```