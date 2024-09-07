import java.util.Arrays;
import java.util.stream.Collector;
import java.util.stream.Collectors;

class Debug {
  @SafeVarargs
  public static<T> void dbg(T... args){
      System.out.print("[DEBUG]: ");
      System.out.print("[");
      for(var arg: args){
        if(arg.getClass().isArray()){
          if(arg instanceof String[])
            System.out.print(Arrays.toString((String[])arg));
          else if(arg instanceof int[])
            System.out.print(Arrays.toString((int[])arg));
          else if(arg instanceof char[])
            System.out.print(Arrays.toString((char[])arg));
        }else 
          System.out.print(arg);
        System.out.print(" ");
      }
      System.out.println("]");
  }
}
