import java.util.*;

class function{
  public void x( Integer n){
    if(n==0){
      return;
    }
    System.out.println(n);
    x(n-1);
  }
}

public class main{
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    Integer n = sc.nextInt();

    function f = new function();
    f.x(n);
  }
}