public class CozaLozaWoza{
public static void main(String argv[]){
int counter=0;
for(int i=1;i<=110;i++){
Judge(i);
counter++;
if(counter % 11 ==0){
System.out.println();
}else{
System.out.print(" ");
}
}
}
public static void Judge(int num){
if(num % 15 == 0){
System.out.print("CozaLoza");
}else{if(num % 7 == 0){
System.out.print("Woza");
}else{if(num % 5 == 0){
System.out.print("Loza");
}else{if(num %3 == 0){
System.out.print("coza");
}else{
System.out.print(num);
}
}
}}

}

}

