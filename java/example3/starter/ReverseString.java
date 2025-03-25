import java.util.Stack;

public class ReverseString {
    public static String reverse(String input) {
        Stack stack = new Stack();

        for (char c : input.toCharArray()) {
            stack.add(c); 
        }

        String reversed = "";
        while (!stack.empty()) {
            reversed.concat((char)stack.pop()); 
        }

        return reversed;
    }

    public static void main(String[] args) {
        String input = "world";
        String result = reverse(input);
        System.out.println("Reversed: " + result); 
    }
}
