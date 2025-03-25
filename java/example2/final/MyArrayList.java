public class MyArrayList {
    private int[] data;
    private int size;

    public MyArrayList() {
        data = new int[10];
        size = 0;
    }

    public void add(int value) {
        if (size == data.length) {
            resize();
        }
        data[size++] = value;
    }

    private void resize() {
        int[] newData = new int[data.length * 2];
        for (int i = 0; i < data.length; i++) {
            newData[i] = data[i];
        }
        data = newData;
    }

    public int get(int index) {
        if (index < 0 || index >= size) throw new IndexOutOfBoundsException();
        return data[index];
    }

    public int size() {
        return size;
    }

    public static void main(String[] args) {
        MyArrayList list = new MyArrayList();
        list.add(5);
        list.add(10);
        System.out.println("Element at index 1: " + list.get(1)); // 10
        System.out.println("Size: " + list.size()); // 2
    }
}
