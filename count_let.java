import java.util.*;
public class Main
{
	public static void main(String[] args) {
		String s1;
		Scanner sc=new Scanner(System.in);
		s1=sc.nextLine();
		String s2=s1.replaceAll(" ","");
	    int k=s2.length();
		System.out.println(k);
	}
}
