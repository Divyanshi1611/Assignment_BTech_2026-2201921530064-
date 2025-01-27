/*Create a class Shape with a method calculateArea() that is overridden by Circle and Rectangle classes.

Constraints:
Circle should have a radius and override calculateArea() to return π * r².
Rectangle should have length and width and override calculateArea() to return length * width.*/
abstract class Shape {
    abstract double calculateArea();
}

class Circle extends Shape {
    double radius;
    Circle(double radius) { this.radius = radius; }
    double calculateArea() { return Math.PI * radius * radius; }
}

class Rectangle extends Shape {
    double length, width;
    Rectangle(double length, double width) {
        this.length = length;
        this.width = width;
    }
    double calculateArea() { return length * width; }
}

public class Main {
    public static void main(String[] args) {
        Shape circle = new Circle(5);
        Shape rectangle = new Rectangle(4, 6);

        System.out.println("Circle Area: " + circle.calculateArea());
        System.out.println("Rectangle Area: " + rectangle.calculateArea());
    }
}
