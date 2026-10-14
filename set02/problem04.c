/*WAP to add n fractions*/
#include <stdio.h>

struct fraction {
    int num, den;
};

typedef struct fraction Fraction;

int find_gcd(int a, int b)
{
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

Fraction input()
{
    Fraction f;
    printf("Enter numerator and denominator: ");
    scanf("%d%d", &f.num, &f.den);
    return f;
}

void input_n_fractions(int n, Fraction fs[n])
{
    for (int i = 0; i < n; i++) {
        fs[i] = input();
    }
}

Fraction add_fraction(Fraction f1, Fraction f2)
{
    Fraction result;

    result.den = f1.den * f2.den;
    result.num = f1.num * f2.den
               + f2.num * f1.den;

    int gcd = find_gcd(result.num, result.den);
    result.num /= gcd;
    result.den /= gcd;

    return result;
}

Fraction add_n_fractions(int n, Fraction fs[n])
{
    Fraction result = fs[0];

    for (int i = 1; i < n; i++) {
        result = add_fraction(result, fs[i]);
    }

    return result;
}

void output_n_fractions(int n, Fraction fs[n],
                        Fraction result)
{
    for (int i = 0; i < n - 1; i++) {
        printf("%d/%d + ", fs[i].num, fs[i].den);
    }

    printf("%d/%d = %d/%d\n",
           fs[n - 1].num, fs[n - 1].den,
           result.num, result.den);
}

int main()
{
    int n;

    printf("Enter the number of fractions: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid number of fractions\n");
        return 0;
    }

    Fraction fs[n];

    input_n_fractions(n, fs);

    Fraction result = add_n_fractions(n, fs);

    output_n_fractions(n, fs, result);

    return 0;
}