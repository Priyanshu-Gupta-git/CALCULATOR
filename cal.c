#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int choice() {
    int ch;
    printf("\t\t||SIMPLE CALCULATOR||\n");
    printf("Add->'+'\n");
    printf("Subtract->'-'\n");
    printf("Multiply->'*'\n");
    printf("Divide->'/'\n");
    printf("factorial->'1'\n");
    printf("if you want find nCr then enter ->'2'\n");
    printf("modulus->'3'\n");
    printf("if you want find the greater number then enter->'4' \n");
    printf("if you want find the smallest number then enter->'5' \n");
    printf("if you want find the Distance then enter->'6' \n");
    printf("if you want find square root then enter ->'7'\n");
    printf("if you want find area of circle then enter ->'8'\n");
    printf("if you want find area of simple interest and compound interest then enter ->'9'\n");
    printf("if you want find number of power then enter ->'10'\n");
    scanf("%d", &ch);
    
    return ch;
}

void add() {
    int n1, n2;
    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);
    printf("Result: %d\n", n1 + n2);
}

void Subtract() {
    int n1, n2;
    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);
    printf("Result: %d\n", n1 - n2);
}
void Multiply() {
    int n1, n2;
    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);
    printf("Result: %d\n", n1 * n2);
}
void Divide() {
    int n1, n2;
    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);
    if (n2 != 0) {
        printf("Result: %d\n", n1 / n2);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}
void fact() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int i, f = 1;
    for (i = 1; i <= n; i++) {
        f *= i;
    }
    printf("Factorial: %d\n", f);
}
int fct(int n) {
    int i, f = 1;
    for (i = 1; i <= n; i++) {
        f *= i;
    }
    return f;
}

int ract(int n) {
    int i, f = 1;
    for (i = 1; i <= n; i++) {
        f *= i;
    }
    return f;
}

int nract(int r, int n) {
    int i, f = 1;
    int num = n - r;
    for (i = 1; i <= num; i++) {
        f *= i;
    }
    return f;
}

void ncr() {
    int n, r, num, run, nrun, ncr = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of r: ");
    scanf("%d", &r);
    if (r < n) {
        num = fct(n);
        run = ract(r);
        nrun = nract(r, n);
        ncr = num / (run * nrun);
        printf("nCr: %d\n", ncr);
    } else {
        printf("Please ensure that n is greater than r.\n");
    }
}

void mod() {
    int n1, n2;
    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);
    printf("Result: %d\n", n1 % n2);
}

void greater() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c) {
        printf("Greatest: %d\n", a);
    } else if (b > a && b > c) {
        printf("Greatest: %d\n", b);
    } else if (a == b && b == c) {
        printf("All numbers are equal.\n");
    } else {
        printf("Greatest: %d\n", c);
    }
}

void smallest() {
    int a, b, c, smallest;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    smallest = a;
    if (b < smallest) {
        smallest = b;
    }
    if (c < smallest) {
        smallest = c;
    }
    printf("Smallest: %d\n", smallest);
}

void Distance() {
    int x1, x2, y1, y2;
    float dis;
    printf("Enter the values of x1, x2, y1, and y2: ");
    scanf("%d%d%d%d", &x1, &x2, &y1, &y2);
    dis = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("Distance: %.2f\n", dis);
}

void squareroot() {
    float x;
    printf("Enter a number: ");
    scanf("%f", &x);
    printf("Square root: %.2f\n", sqrt(x));
}

void area() {
    float radius, area;
    printf("Enter the radius: ");
    scanf("%f", &radius);
    area = 3.14 * radius * radius;
    printf("Area of circle: %.2f\n", area);
}

void si() {
    float p, r, t, si, ci;
    printf("Enter principle: ");
    scanf("%f", &p);
    printf("Enter rate: ");
    scanf("%f", &r);
    printf("Enter time: ");
    scanf("%f", &t);
    si = (p * r * t) / 100;
    printf("Simple interest: %.2f\n", si);
    ci = p * pow((1 + r / 100), t) - p;
    printf("Compound interest: %.2f\n", ci);
}

void power() {
    float x, y;
    printf("Enter a number and then enter the power: ");
    scanf("%f%f", &x, &y);
    printf("Result: %.2f\n", pow(x, y));
}

int main() {
    int ch = choice();
    switch(ch) {
        case '+':
            add();
            break;
        case '-':
            Subtract();
            break;
        case '*':
            Multiply();
            break;
        case '/':
            Divide();
            break;
        case 1:
            fact();
            break;
        case 2:
            ncr();
            break;
        case 3:
            mod();
            break;
        case 4:
            greater();
            break;
        case 5:
            smallest();
            break;
        case 6:
            Distance();
            break;
        case 7:
            squareroot();
            break;
        case 8:
            area();
            break;
        case 9:
            si();
            break;
        case 10:
            power();
            break;
        default:
            printf("Invalid choice.\n");
        }return 0;}
        
