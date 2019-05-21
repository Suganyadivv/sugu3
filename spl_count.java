import java.util.*;
public class Main
{
	public static void main(String[] args)
	{
		String s1;
		int count=0;
		Scanner sc=new Scanner(System.in);
		s1=sc.nextLine();
		char b=' ';
	    char a[]=s1.toCharArray();
	   for(int i=0;i<a.length;i++)
	   { 
	   if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z') || (a[i]>='0' && a[i]<='9') || (a[i]==b) )
	   {
	       a[i]=0;
	   }
	   else
	   {
	      count++;
	   }
	   }
		System.out.println(count);
		}
}
