public class ToString {

    public static void main(String[] args) {
        Student obj1 = new Student("NIKIL", 20);
        Student obj2 = new Student("suba", 10);
        System.out.println(obj1);
        System.out.println(obj2);
    }
}

class Student {
    String name;
    int age;

    Student(String name, int age) {
        this.name = name;
        this.age = age;
    }

    public String toString() {
        return name + ' ' + age;
    }
}