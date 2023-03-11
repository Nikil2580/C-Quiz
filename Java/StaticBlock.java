public class StaticBlock {
    public static void main(String[] args) {
        System.out.println("CTS");
    }

    static {
        System.out.println("Covai.Co");
    }
}

// JVM loads the main class and first executes the static block and then executes the main method
// Static block can be used to open the database or file before the main method executes
