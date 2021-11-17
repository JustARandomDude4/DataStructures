/*  Content:  
Lines : 15:200 :Lab prgs W1,2,3
 line:191:  Example for static keyword
 Line 208: Example for super keyword
 Line :249: Eg.2 dynamic method dispatch 
 Line 270:Eg.2 Dynamic method dispatch   
 line: 300: Eg Abstract classes 1
 Line: 322: Eg.Abstract classes 2
 Line 353: Interface
 Line 376: Lab Program using absract 
 Lines : 466-564 :Assignment 1
 Line 568: Singleton class(early instantiation)
 Line 588: Singleton class(Lazy instantiation)
 Line 667 : Exception handling
 **/

/* W3. 1. wap to crate a box class with height, width and depth as the members*/

class Box { int h, w, d;}

class Sat 
{ public static void main(String args[]) {
       Box ob1 = new Box();
       ob1.h = 20; ob1.w = 50; ob1.d = 88;
       int v = ob1.h * ob1.w * ob1.d;
       System.out.println(v);   
}}*/

// P2 create a class box with h,w,d as the member variables and volume as a
// method and 3 different constructors
class Box {
    int h, w, d;

    Box() {
        h = 10;
        w = 5;
        d = 9;
    }

    Box(int x, int y, int z) {
        h = x;
        w = y;
        d = z;
    }

    Box(Box ob) {
    }

    int v() {
        return (h * w * d);
    }
}

class Sat
 {      public static void main(String args[]) {
        Box ob1 = new Box();
        Box ob3 = new Box(10, 20, 30);
        Box ob4 = new Box(ob1);

        System.out.println(ob1.v());
        System.out.println(ob3.v());
        System.out.println(ob4.v());  }}*/

// P3 Wap to create a student class with the following members:
// rollno,rank,name, percentage,attendence
// wa constructor and a method that displays student details and a method which
// checks the standards(meet standard)
/*
 * import java.util.Scanner;
 * 
 * class A { int roll, rank; double percentage, attendence; String name;
 * 
 * void readdata() // method that reads data of user { Scanner ob = new
 * Scanner(System.in); name = ob.nextLine(); roll = ob.nextInt(); percentage =
 * ob.nextDouble(); rank = ob.nextInt(); attendence = ob.nextDouble(); }
 * 
 * void display() // method that displays data of user {
 * System.out.println("The details of the candidate are:");
 * System.out.println("Name:" + name); System.out.println("Roll no:" + roll);
 * System.out.println("Rank:" + rank); System.out.println("Percentage" +
 * percentage); System.out.println("Attendence" + attendence); }
 * 
 * void standards(double percentage) // method that checks elibibiliy { if
 * (percentage > 60.00) {
 * System.out.println("Candidete's percentage is elligible "); } else {
 * System.out.println("The candidate's  is not eligible"); } }
 * 
 * void standards(int attendence) // method that checks elibibiliy { if
 * (attendence > 80.00) {
 * System.out.println("Candidete's attendence is elligible ");} else
 * {System.out.println("The candidate's attendence is not eligible");} } }
 * 
 * class Sat { // main method public static void main(String args[]) { A ob1 =
 * new A(); ob1.readdata(); ob1.display(); ob1.standards(ob1.percentage);
 * ob1.standards(ob1.attendence); } }
 */

/*
 * Create a class called 'Matrix' containing constructor that initializes the
 * number of rows and number of columns of a new Matrix object. The Matrix class
 * has the following information: Instance Varaiables: 1 - number of rows of
 * matrix 2 - number of columns of matrix 3 - elements of matrix in the form of
 * 2D array methods: 1 - get the number of rows 2 - get the number of columns 3
 * – read the values into the array 4 - adding two matrices. If the matrices are
 * not addable, "Matrices cannot be added" will be displayed. 5 - multiplying
 * the two matrices 6- Display the matrix
 */
/*
 * import java.util.Scanner;
 * 
 * class Matrix { int r1, c1, r2, c2, a[][], b[][], c[][], d[][];
 * 
 * void get() { Scanner ob = new Scanner(System.in); r1 = ob.nextInt(); c1 =
 * ob.nextInt(); a = new int[r1][c1];
 * System.out.println("enter matrix1 elements"); for (int i = 0; i < r1; i++)
 * for (int j = 0; j < c1; j++) a[i][j] = ob.nextInt(); r2 = ob.nextInt(); c2 =
 * ob.nextInt(); b = new int[r2][c2];
 * System.out.println("enter matrix 2 elements"); for (int i = 0; i < r2; i++)
 * for (int j = 0; j < c2; j++) b[i][j] = ob.nextInt(); }
 * 
 * void add() { if (r1 == r2 & c1 == c2) { c = new int[r1][c1]; for (int i = 0;
 * i < r1; i++) for (int j = 0; j < c1; j++) c[i][j] = a[i][j] + b[i][j];
 * System.out.println("The sum matrix of the 2 matrices is"); for (int i = 0; i
 * < r2; i++) for (int j = 0; j < c2; j++) System.out.print(c[i][j]);
 * System.out.println(); } else {
 * System.out.println("The sum matrix of the 2 matrices is not possible"); } }
 * 
 * void mul() { if (r2 == c1) { d = new int[r1][c2]; for (int i = 0; i < r1;
 * i++) for (int j = 0; j < c2; j++) { d[i][j] = 0; d for (int k = 0; k < r1 *
 * c2; k++) d[i][j] = a[i][k] * b[k][j]; }
 * System.out.println("The product matrix of the 2 matrices is"); for (int i =
 * 0; i < r1; i++) for (int j = 0; j < c2; j++) System.out.print(d[i][j]);
 * System.out.println(); } else {
 * System.out.println("The  product of the 2 matrices is not possible"); } }
 * 
 * }
 * 
 * class Sat { public static void main(String args[]) { Matrix ob1 = new
 * Matrix(); ob1.get(); ob1.add(); ob1.mul(); } }
 */
/*
 * //Passing an object as a parameter and returning obj example: import
 * java.util.Scanner; class a { int i,j; a(int x,int y){ i=x;j=y; }
 * //constructor
 * 
 * boolean checkEquality(a obj) // passing obj { if((i==obj.i) && (j==obj.j))
 * {return true;} else {return false;} }
 * 
 * a returningObj() //returning object { a ob5=new a(i+10,j+10); return(ob5); }
 * } class Sat { public static void main(String args[]) { Scanner ob=new
 * Scanner(System.in); a ob1=new a(ob.nextInt(),ob.nextInt()); a ob2=new
 * a(ob.nextInt(),ob.nextInt()); a ob3=new a(ob.nextInt(),ob.nextInt()); a
 * ob4=ob1.returningObj();
 * 
 * System.out.println(ob4.i+" "+ob4.j);
 * System.out.println("Object 1's variables are equal to object 2 :"+ob1.
 * checkEquality(ob2));
 * System.out.println("Object 3's variables are equal to object 2 :"+ob2.
 * checkEquality(ob3)); } }
 */

// Example for static keyword
class classEg {
    static int y = 2, z; // static variables

    static void Method(int x) {
        System.out.println(x);
        System.out.println(y);
        System.out.println(z);
    } // static method

    static {
        System.out.println("This is Static block");
        z = y * 20;
    } // static block is first executed
}

class Sat {
    public static void main(String args[]) {
        classEg.Method(88);
    }
}*/

// Example for superclass reffering to subclass obj

class Super {
    int i, j, k;
}

class Sub extends Super {
    Sub(int x, int y, int z) {
        i = x;
        j = y;
        k = z;
    }
}

class Sat      
{public static void main(String args[])
{
    Super ob=new Super();
    Sub ob1=new Sub(1,2,3);

    ob=ob1;     //Super ob referring to sub object.
    System.out.println(ob1.i);
    System.out.println(ob.i);         }}*/

// Example for super keyword
class SuperC {
    int i, j, k;

    SuperC(int x, int y, int z) {
        i = x;
        j = y;
        z = k;
    }

    int method() {
        return (12);
    }
}

class SubC extends SuperC {
    int l;

    SubC(int x, int y, int z, int m) {
        super(x, y, z);
        l = m;
    }
    // super must be the first line of the subclass constructor

    int SubMethod() {
        return (super.i + super.method());
    }
}

class Sat
{public static void main(String args[])
    {
      SubC ob=new SubC(11,12,22,84);
      System.out.println(ob.SubMethod());
    } }*/

//// Example 1 on dynamic method dispatch
class A {
    void method() {
        System.out.println("1");
    }
}

class B extends A {
    void method() {
        System.out.println("2");
    }
}

class C extends B {
    void method() {
        System.out.println("3");
    }
}

class Sat {
    public static void main(String args[]) {
        A ob = new A();
        B ob1 = new B();
        C ob2 = new C(); // 3 objects for 3 classes

        A ref; // creating a refference of type A

        ref = ob;
        ref.method(); // ref reffering to A's obj
        ref = ob1;
        ref.method(); // ref reffering to B's obj
        ref = ob2;
        ref.method(); // ref reffering to C's obj
    }
}

// Example 2 on Dynamic method dispatch //important topic this is as runtime
// polymorphism is used.
class figure {
    int a, b;

    figure(int i, int j) {
        a = i;
        b = j;
    }

    double area() {
        return (a * b);
    }
}

class rectangle extends figure

{
    rectangle() {
        super(1, 2);
    }

    double area() {
        return (a * b);
    }
}

class square extends figure

{
    square() {
        super(6, 8);
    }

    double area() {
        return (a * b);
    }
}

class parallelogram extends figure

{
    parallelogram() {
        super(8, 9);
    }

    double area() {
        return (a * b);
    }
}

class Sat
{public static void main(String args[])
{
    figure ob=new figure(66,88);
    rectangle ob1=new rectangle();
    square ob2=new square();
    parallelogram ob3=new parallelogram();

    figure ref;
    ref=ob; System.out.println(ref.area());
    ref=ob1; System.out.println(ref.area());
    ref=ob2; System.out.println(ref.area());
    ref=ob3; System.out.println(ref.area());
}}*/

// Example for Abstract classes 1
abstract class a {
    abstract void method1();

    abstract void method2(int x);

    abstract void method3(int x, int y);

    void method4() {
        System.out.println("Normal method in super class getting overridden");
    }
}

class b extends a {
    void method1() {
        System.out.println("Abstract method implementation by sub class");
    }

    void method2(int x) {
        System.out.println("Abstract method2 " + x);
    }

    void method3(int x, int y) {
        System.out.println("Abstract method3 " + x + y);
    }

    void method4() {
        System.out.println("Normal method in subclass getting overridden");
    }
}

class Sat {
    public static void main(String args[]) {
        b ob = new b();
        ob.method1();
        ob.method2(9);
        ob.method3(1, 2);
        ob.method4();
    }
}

// Example 2 for Abstract classes
/*
 * Create an Abstract class Figure with required members. Create two subclasses
 * of Figure – Rectangle, Triangle with required members. In main method create
 * the objects of Rectangle and Triangle class and call the methods to calculate
 * the area. Wap making use of Figure- interface, Rectangle -class,
 * Triangle-class that illustrates dynamic polymorphism using interface
 */
import java.util.Scanner;

abstract class figure
{ int x, y;    
figure()   { Scanner ob=new Scanner(System.in);  x=ob.nextInt();y=ob.nextInt();  }  //constructor
abstract double area();
}

class rectangle extends figure {
    rectangle() {
        super();
    }

    double area() {
        return (x * y);
    }
}

class triangle extends figure {
    triangle() {
        super();
    }

    double area() {
        return (x * y * 0.5);
    }
}

class Sat
{ public static void main(String args[])
 {  
    rectangle ob1=new rectangle();
    triangle ob2=new triangle();
    System.out.println("Area of rectangle is : "+ob1.area());
    System.out.println("Area of triangle is  "+ob2.area());
 }  
}*/

// Example for interface
interface figure {
    int x = 10, y = 20;

    public double area();
}

class rectangle implements figure {
    rectangle() {
        super();
    }

    public double area() {
        return (x * y);
    }
}

class triangle implements figure {
    triangle() {
        super();
    }

    public double area() {
        return (x * y * 0.5);
    }
}

class Sat {
    public static void main(String args[]) {
        rectangle ob1 = new rectangle();
        triangle ob2 = new triangle();
        System.out.println("Area of rectangle is : " + ob1.area());
        System.out.println("Area of triangle is  " + ob2.area());
    }
}*/
// Lab Program using absract
// wap to create a student class with rollno,name with constructor
// a concrete method with eligibility criteria and 3 abstract methods
// :writtentest(3), interview(), package
// crate classes tcs,accenture which extends student class
import java.util.Scanner;

abstract class Student            //Abstract Class
{ int roll; String name;double OverallGrade;
    Student(String n,int r)  {roll=r;name=n; OverallGrade=0; }  //constructor
    int eligibility(double x)  { if (x>8){System.out.println("The candidete is eligible for job ");return(1);}  else {return(0);}  }
    abstract int writtenTest(double a, double b, double c);
    abstract int interview(double a,double b);
    abstract  void Package();
}

class tcs extends Student {
    tcs(String y, int x) {
        super(y, x);
    } // constructor

    int writtenTest(double a, double b, double c) {
        if ((a + b + c) > 200.00) {
            OverallGrade = (a + b + c) / 500;
            return (1);
        } else {
            return (0);
        }
    }

    int interview(double a, double b) {
        if ((a + b) > 180) {
            OverallGrade += (a + b) / 5;
            return (1);
        } else {
            return (0);
        }
    }

    void Package() {
        if (OverallGrade > 9) {
            System.out.println("Your Salery is 25 lakhs/anum");
        }
        if (OverallGrade <= 9 && OverallGrade > 8.5) {
            System.out.println("Your Salery is 15 lakhs/anum");
        }
        if (OverallGrade <= 8.5) {
            System.out.println("Your Salery is 10 lakhs/anum");
        }
    }
}

class acenture extends Student {
    acenture(String y, int x) {
        super(y, x);
    } // constructor

    int writtenTest(double a, double b, double c) {
        if ((a + b + c) > 250.00) {
            OverallGrade = (a + b + c) / 500;
            return (1);
        } else {
            return (0);
        }
    }

    int interview(double a, double b) {
        if ((a + b) > 160) {
            OverallGrade += (a + b) / 5;
            return (1);
        } else {
            return (0);
        }
    }

    void Package() {
        if (OverallGrade > 9.5) {
            System.out.println("Your Salery is 30 lakhs/anum");
        }
        if (OverallGrade <= 9.5 && OverallGrade > 8) {
            System.out.println("Your Salery is 22 lakhs/anum");
        }
        if (OverallGrade <= 8) {
            System.out.println("Your Salery is 14 lakhs/anum");
        }
    }
}

class Sat {
    public static void main(String args[]) {
        Scanner ob = new Scanner(System.in);

        System.out.println("WHich company do u wanna apply for?\n enter 1 for tcs \n enter 2 for acenture ");
        int company = ob.nextInt();

        if (company == 1) {
            System.out.println("Enter Name and roll no of candidate: ");
            tcs ob1 = new tcs(ob.next(), ob.nextInt());
            System.out.println("Enter your gpa: ");
            Double gpa = ob.nextDouble();
            if (ob1.eligibility(gpa) == 1) {
                System.out.println("Enter Your writtern test marks \n round1 : \n round2 : \n round3 :");
                if (ob1.writtenTest(ob.nextDouble(), ob.nextDouble(), ob.nextDouble()) == 1) {
                    System.out.println("Enter Your Interview Marks");
                    if (ob1.interview(ob.nextDouble(), ob.nextDouble()) == 1) {
                        ob1.Package();
                    } else {
                        System.out.println("You failed the Interiew round.");
                    }
                } else {
                    System.out.println("You failed the Written test round.");
                }
            } else {
                System.out.println("You are not  eligible for job ");
            }
        }

        else {
            System.out.println("Enter Name and roll no of candidate: ");
            acenture ob2 = new acenture(ob.next(), ob.nextInt());
            System.out.println("Enter your gpa: ");
            Double gpa = ob.nextDouble();
            if (ob2.eligibility(gpa) == 1) {
                System.out.println("Enter Your writtern test marks \n round1 : \n round2 : \n round3 :");
                if (ob2.writtenTest(ob.nextDouble(), ob.nextDouble(), ob.nextDouble()) == 1) {
                    System.out.println("Enter Your Interview Marks");
                    if (ob2.interview(ob.nextDouble(), ob.nextDouble()) == 1) {
                        ob2.Package();
                    } else {
                        System.out.println("You failed the Interiew round.");
                    }
                } else {
                    System.out.println("You failed the Written test round.");
                }
            } else {
                System.out.println("You are not  eligible for job ");
            }
        }

    }
}*/
// Assignment1 1st
import java.util.Scanner;

class Employee
{   String name,address,gender; int age;
    Employee() 
        { Scanner ob = new Scanner(System.in);
            System.out.println("Enter Name: \nEnter Address: \nEnter Gender: \nEnter Age: ");
          name = ob.nextLine(); address = ob.nextLine();gender = ob.nextLine();
          age = ob.nextInt();}

    void display() {}

}

class FullTimeEmployee extends Employee {
    int salery;
    String designation;

    FullTimeEmployee() {
        super();
        Scanner ob = new Scanner(System.in);
        System.out.println("Enter designation and salery");
        designation = ob.nextLine();
        salery = ob.nextInt();
    }

    void display() {
        System.out.println("Name: " + name + "\n Age:" + age + "\n Gender: " + gender + "\n Address");
        System.out.println(" Designation: " + designation + "Salery:" + salery);
    }
}

class PartTimeEmployee extends Employee {
    int workingHours, ratePerHour;

    PartTimeEmployee() {
        super();
        Scanner ob = new Scanner(System.in);
        System.out.println("Enter working hours and rate per hour ");
        workingHours = ob.nextInt();
        ratePerHour = ob.nextInt();
    }

    int calculatePay() {
        return (workingHours * ratePerHour);
    }

    void display() {
        System.out.println("Name: " + name + "\n Age:" + age + "\n Gender: " + gender + "\n Address");
        System.out.println(" Pay: " + calculatePay());
    }
}

class Sat {
    public static void main(String args[]) {
        Employee ob1 = new Employee();
        FullTimeEmployee ob2 = new FullTimeEmployee();
        PartTimeEmployee ob3 = new PartTimeEmployee();
        System.out.println("Full time Employee's details : ");
        ob2.display();
        System.out.println("PartTimeEmployee's detials  ");
        ob3.display();
    }
}*// *
  // Assignment1 2nd
import java.util.Scanner;

class circle {
    int r;
    Double t;

    circle() {
        Scanner ob = new Scanner(System.in);
        System.out.println("Enter radius of circle");
        r = ob.nextInt();
        System.out.println("Enter angle  of arc");
        t = ob.nextDouble();
        t = t * 3.14 / 180;
    }

    void circleCircumference() {
        System.out.println("Circumference of circle is: " + 2 * 3.14 * r);
    }

    void arclength() {
        System.out.println("arc length  is: " + r * t);
    }
}

class Sat
   { public static void main(String args[])
   {  
     circle ob1=new circle();
     ob1.circleCircumference();
     ob1.arclength();
   
   }
   }*/
// Assignment 3
/*
 * import java.util.Scanner; class Sat { public static void main(String args[])
 * { Scanner ob=new Scanner(System.in);
 * System.out.println("Enter the no of students:"); int s=ob.nextInt(); int
 * t,sum=0; int avg[]=new int[s]; String n[]=new String[s];
 * 
 * for(int i=0;i<s;i++) { System.out.println("Enter name of student :");
 * n[i]=ob.next();
 * System.out.println("Enter how many test marks are to be entered");
 * t=ob.nextInt(); for(int j=0;j<t;j++) {
 * System.out.println("Enter "+(j+1)+" subject marks:"); sum+=ob.nextInt(); }
 * avg[i]=sum/t; sum=0; }
 * 
 * for(int i=0;i<s;i++) { System.out.println("Name:"+n[i]);
 * System.out.println("Average test  marks: "+avg[i]); } }}
 */
// Example for Singleton class(Early Instantiation)

class A {
    private static A ob = new A(); // this creates object during class loading time

    private A() {
    } // constructor

    public static A objSenderMethod() {
        return (ob);
    } // return type is A as it returnss object

    public void NormalMethod() {
        System.out.println("Yo!sup U accessed singleton class method ");
    }
}

class Sat
{
    public static void main(String args[])
    { 
        A refOb;   //creating a refference object of type A
        refOb=A.objSenderMethod();  //storing the returned object by singleton clss into ref obj
        refOb.NormalMethod();       //calling method using ref ob
    }
}*/
// Example 2 for Singleton class(Lazy Instantiation)

class A {
    private static A ob = null; // this creates object during class loading time

    private A() {
    } // constructor

    public static A objSenderMethod() {
        if (ob == null) {
            ob = new A();
        } // lazy instantiation
        return (ob);
    } // return type is A as it returnss object

    public void NormalMethod() {
        System.out.println("Yo!sup U accessed singleton class method ");
    }
}

class Sat {
    public static void main(String args[]) {
        A refOb; // creating a refference object of type A
        refOb = A.objSenderMethod(); // storing the returned object by singleton clss into ref obj
        refOb.NormalMethod(); // calling method using ref ob
    }
}

interface A {
    public void display();
}

class B implements A {
    int x, y;

    B() {
        Scanner ob = new Scanner();
        x = ob.nextInt();
        y = ob.nextInt();
    } // constructor

    public void display() {
        System.out.print(x + y);
    }
}

class Sat {
    public static void main(String args[]) {
        B ob = new B();
        ob.display();
    }
}

interface A {
    public void display();
}

class B implements A {
    int x, y;

    B(int a, int b) {
        x = a;
        y = b;
    } // constructor

    public void display() {
        System.out.print(x + y);
    }
}

class Sat {
    public static void main(String args[]) {
        Scanner ob = new Scanner();
        int i = ob.nextInt();
        j = ob.nextInt();
        B ob = new B(i, j);
        ob.display();
    }
}*/

// Exception Handling

// try block to catch exceptions || catch to handle exception
// finally for that code thats a must to be executed

class Sat {
    public static void main(String args[]) {
        try {
            int a = 1, b;
            b = a / 0;
            System.out.println("This wont be executed hehe");
        } catch (ArithmeticException e) {
            System.out.println("You can't divide a number by 0 bloddy!!");
        }
        System.out.println("This wil be executed :)) ");

    }
}
