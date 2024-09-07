import java.sql.SQLOutput;
import java.util.Arrays;

class Kata {

    public static int[] arrayDiff(int[] a, int[] b) {
        int n = a.length;
        int[] ans = new int[n];
        int c = 0;
        for(int i = 0;i < n;++i){
            boolean valid = Arrays.binarySearch(b,a[i]) < 0;
            if(valid) ans[c++] = a[i];
        }
        return Arrays.copyOfRange(ans,0,c - 1);
    }

}


public class Main {
    public static void main(String[] args) {
        int[] ans = Kata.arrayDiff(new int[]{1,2,2,2,1},new int[]{1});
        System.out.println(Arrays.toString(ans));
    }
}

