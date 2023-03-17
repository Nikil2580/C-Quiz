public class LongFloat {
    public static void main(String[] args) {
        long num1 = 987_654_321L;
        float num2 = 123_345.001F;
        System.out.println(num1); // 987654321
        System.out.println(num2); // 123345.0

        // Note that the decimal point and digits after it in the num2 value are
        // truncated when it is printed to the console, since float values have limited
        // precision.

        double num3 = 123_345.001;
        System.out.println(num3); // 123345.001
    }
}
