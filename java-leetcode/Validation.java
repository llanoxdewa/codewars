
class Validation {


  public static void validate(){
    
  }


  public static<T> void cek(T ans, T rans){
    boolean valid = ans.equals(rans);
    if(valid)
      System.out.println("[PASSED]");
    else {
      System.out.println("[FAILED]");
      System.out.println("==> rans");
      System.out.println(rans);
      System.out.println("==> ans");
      System.out.println(ans);
    }
  }

  public static void cek(int ans, int rans){
    boolean valid = ans == rans;
    if(valid)
      System.out.println("[PASSED]");
    else {
      System.out.println("[FAILED]");
      System.out.println("==> rans");
      System.out.println(rans);
      System.out.println("==> ans");
      System.out.println(ans);
    }
  }
}
