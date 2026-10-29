import java.util.*;

public class transformArray {
  public static void main(String[] args){

    ArrayList<Integer> arr1 = new ArrayList<>();
    ArrayList<Integer> arr2 = new ArrayList<>();
    
    Scanner sc = new Scanner(System.in);

    System.out.println("Enter n1: ");
    int n1 = sc.nextInt();
    int n2 = n1 + 1;

    System.out.println("Enter ele of arr1: ");
    for(int i=0;i<n1;i++){
      arr1.add(sc.nextInt());
    }

    System.out.println("Enter ele of arr1: ");
    for(int i=0;i<n2;i++){
      arr2.add(sc.nextInt());
    }

    int ans = 0;
    for(int i=0;i<n1;i++){
      ans += Math.abs(arr1.get(i) - arr2.get(i));
    }

    int mindiff = Integer.MAX_VALUE;
    int target = arr2.get(n1);

    for(int i=0;i<n1;i++){
      int l = Math.min(arr1.get(i),arr2.get(i));
      int h = Math.max(arr1.get(i),arr2.get(i));

      int diff = 0;
      if(target<l) diff = l-target;
      else if(target>h) diff = target-h;
      else diff = 0;

      mindiff = Math.min(mindiff,diff);      
    }
    System.out.println(ans+mindiff+1);
    
    sc.close();
  }
}
