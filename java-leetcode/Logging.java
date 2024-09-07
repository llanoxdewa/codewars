
import java.util.Arrays;
import java.util.List;
import java.util.Date;


public class Logging {
    public static final String RESET = "\u001B[0m";
    public static final String BLACK = "\u001B[30m";
    public static final String RED = "\u001B[31m";
    public static final String GREEN = "\u001B[32m";
    public static final String YELLOW = "\u001B[33m";
    public static final String BLUE = "\u001B[34m";
    public static final String PURPLE = "\u001B[35m";
    public static final String CYAN = "\u001B[36m";
    public static final String WHITE = "\u001B[37m";

    public static<T> void dbg(T... msg){
        final String  type = "[DEBUG]: ";
        System.out.println(Logging.PURPLE + type + Arrays.toString(msg) + Logging.RESET);
    }

    public static void valid(String msg){
        final String  type = "[SUCCESS]: ";
        System.out.println(Logging.GREEN + type + String.valueOf(msg) + Logging.RESET);
    }

    public static void error(String msg){
        final String  type = "[ERROR]: ";
        System.out.println(Logging.RED + type + String.valueOf(msg) + Logging.RESET);
    }

    public static void warning(String msg){
        final String  type = "[WARNING]: ";
        System.out.println(Logging.YELLOW + type + String.valueOf(msg) + Logging.RESET);
    }

    public static void info(String msg){
        final String  type = "[INFO]: ";
        System.out.println(Logging.BLUE + type + String.valueOf(msg) + Logging.RESET);
    }
}
