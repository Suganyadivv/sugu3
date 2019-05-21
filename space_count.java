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
	   if(a[i]==b)
	   {
	       count++;
	   }
	   }
		System.out.println(count);
		}
}
