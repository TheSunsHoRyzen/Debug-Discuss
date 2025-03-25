abstract class Animal {
    String name;

    Animal(String name) {
        this.name = name;
    }

    abstract void speak(); // Abstract method

    void eat() {
        System.out.println(name + " is eating.");
    }
}

class Dog extends Animal {
    Dog(String name) {
        super(name);
    }

    @Override
    void speak() {
        System.out.println(name + " barks.");
    }
}

class Cat extends Animal {
    Cat(String name) {
        super(name);
    }

    @Override
    void speak() {
        System.out.println(name + " meows.");
    }
}

public class OOPExample {
    public static void main(String[] args) {
        Animal myDog = new Dog("Buddy");
        Animal myCat = new Cat("Whiskers");

        myDog.speak();  
        myDog.eat();    

        myCat.speak();  
        myCat.eat();    
    }
}