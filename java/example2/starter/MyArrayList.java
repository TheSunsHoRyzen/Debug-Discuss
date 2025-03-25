public class MyArrayList {
    private int[] data;
    private int size;

    public MyArrayList() {
        data = new int[10];
        size = 0;
    }

    public void add(int value) {
        if (size >= data.length) {
        }
        data[size] = value;
        size++;
    }

    private void resize() {
        int[] newData = new int[data.length + 5]; 
        for (int i = 0; i <= data.length; i++) {  
            newData[i] = data[i];
        }
        data = newData;
    }

    public int get(int index) {
        return data[index]; 
    }

    public static void main(String[] args) {
        MyArrayList list = new MyArrayList();
        list.add(7);
        list.add(14);
        System.out.println("Element: " + list.get(5)); 
    }
}
