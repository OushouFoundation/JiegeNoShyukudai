import java.util.Scanner;

public class CheckMark{
public static void main (String argv[]){
Scanner scan=new Scanner(System.in);
int mark;
mark=scan.nextInt();
if(mark>=50){
System.out.println("PASS");
}else{
System.out.println("FALL");
}
}
}
