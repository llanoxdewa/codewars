import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.HashSet;
import java.util.HashMap;
import java.util.function.Supplier;
import java.util.Arrays;
import java.util.Collection;
import java.util.Collections;
import java.util.Comparator;
import java.util.Collection;
import java.util.HashMap;
import java.util.stream.Collector;
import java.util.stream.Collectors;
import java.util.stream.IntStream;
import java.util.stream.Stream;

/*
    matrix i build on n x n
    the most minimum input is 1 
    the most maximum input is 20 

    start with 2 x 2 
    1 2  -> 3 1    
    3 4     4 2 


*/

class Solution {
    // dont make copy of matrix
    // rotate the matrix to 90deg
    public void rotate(int[][] matrix) {
        int n = matrix.length;
        int[][] temp = new int[n][n];
        for(int i = 0;i < n;++i){
            for(int j = 0;j < n;++j){

            }
        }
    }
}

public class Code {

    public static void dbg_arr(int[][] some) {
        for (var val : some)
            System.out.printf(Arrays.toString(val));
        System.out.println();
    }

    public static void dbg_arr(List<Integer[]> some) {
        for (var val : some)
            System.out.printf(Arrays.toString(val));
        System.out.println();
    }

    public static void main(String[] args) {

    }
}
