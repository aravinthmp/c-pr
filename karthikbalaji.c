
public static void main(String[] arg)
{
Scanner d1=new Scanner(System.in);
System.out.println("Enter the value of A : ");
int a=d1.nextInt(); 
System.out.println("Enter the value of B : ");
int b=d1.nextInt(); 
System.out.println("Enter thevalue of C : ");
int c=d1.nextInt(); 
if(a>b&&a>c)
{
System.out.println("A is greater");
}
else if(b>c)
{
System.out.println("B is greater");
}
else
{
System.out.println("c is greater");	
}
}
}
