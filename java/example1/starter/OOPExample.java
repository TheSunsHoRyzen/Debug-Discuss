abstract class Animal {
    String name;

    Animal(String name) {
        this.name = name;
    }

    abstract void speak();

    void eat() {
        System.out.println(name + " is eating.");
    }
}

class Dog extends Animal {
    Dog() {
        name = "Doggo"; 
    }

    void speak(String noise) { 
        System.out.println(name + " says " + noise);
    }
}

class Cat extends Animal {
    Cat(String name) {
        super(name);
    }

    @Override
    void speaks() { 
        System.out.println(name + " meows.");
    }
}

public class OOPExample {
    public static void main(String[] args) {
        Animal dog = new Dog();
        Animal cat = new Cat("Luna");

        dog.speak();
        cat.speak();
    }
}

