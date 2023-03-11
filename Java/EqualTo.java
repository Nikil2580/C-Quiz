public class EqualTo {
    public static void main(String[] args) {
        String name = "Anil";
        String anotherName = new String("Anil");

        System.out.println(name == anotherName);

        System.out.println(name.equals(anotherName));

    }
}
