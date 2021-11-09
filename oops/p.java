//Wap to create an interface named vce methods:fundsdiviison recruitfaculty, maintaingoodresults,placements
//create classes cse,it that implements vce
import java.util.Scanner;
interface vce
{ 
   public void fundsDivision();
   public void RecruitFaculty(double a, double b, double c);
   public void MaintainGoodResults(double a,double b);
   public void Placements();
}
class cse implements vce     //Abstract Class
{ 
    public void fundsDivision(){System.out.println("The funds division is done by director ");}
    public void RecruitFaculty(double a, double b, double c){System.out.println("The funds division is done by director ");}
    public void MaintainGoodResults(double a,double b){System.out.println("The funds division is done by director ");}
    public void Placements(){}
}
class it implements vce     //Abstract Class
{ 
    public void fundsDivision(){System.out.println("The funds division is done by director ");}
    public void RecruitFaculty(double a, double b, double c){System.out.println("The funds division is done by director ");}
    public void MaintainGoodResults(double a,double b){System.out.println("The funds division is done by director ");}
    public void Placements(){}
}

class p
{ public static void main(String args[])
 {   Scanner ob=new Scanner(System.in);  

     System.out.println("WHich company do u wanna apply for?\n enter 1 for tcs \n enter 2 for acenture ");
     int company=ob.nextInt();

     if (company==1)   
     {  System.out.println("Enter Name and roll no of candidate: ");
        tcs ob1=new tcs(ob.next(),ob.nextInt());
        System.out.println("Enter your gpa: ");
        Double gpa=ob.nextDouble();
        if (ob1.eligibility(gpa)==1)
        {
           System.out.println("Enter Your writtern test marks \n round1 : \n round2 : \n round3 :");
           if (ob1.writtenTest(ob.nextDouble(),ob.nextDouble(),ob.nextDouble())==1)
                {  
                    System.out.println("Enter Your Interview Marks");
                    if (ob1.interview(ob.nextDouble(),ob.nextDouble())==1)    {   ob1.Package();  }
                    else                                        {System.out.println("You failed the Interiew round."); }
                }
           else 
                {  System.out.println("You failed the Written test round.");  }
        }
        else
           {System.out.println("You are not  eligible for job ");}    
    }

    else   
{  System.out.println("Enter Name and roll no of candidate: ");
   acenture ob2=new acenture(ob.next(),ob.nextInt());
   System.out.println("Enter your gpa: ");
   Double gpa=ob.nextDouble();
   if (ob2.eligibility(gpa)==1)
   {
      System.out.println("Enter Your writtern test marks \n round1 : \n round2 : \n round3 :");
      if (ob2.writtenTest(ob.nextDouble(),ob.nextDouble(),ob.nextDouble())==1)
           {  
               System.out.println("Enter Your Interview Marks");
               if (ob2.interview(ob.nextDouble(),ob.nextDouble())==1)    {   ob2.Package();  }
               else                                        {System.out.println("You failed the Interiew round."); }
           }
      else 
           {  System.out.println("You failed the Written test round.");  }
   }
   else
      {System.out.println("You are not  eligible for job ");}    
}
}}