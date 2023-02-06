#include <math.h>
#include <stdio.h>

int cube(int n) { return n * n * n; }

double pow1(int n)
{
    double esult = pow(1.5, n);
    return esult;
}

int num(int n) { return n; }

int power2(int n)
{
    int result = pow(2, n);
    return result;
}

double lg(int n)
{
    double result = log(n) / log(2.71);
    return result;
}

double e(int n)
{
    double result = pow(2.71, n);
    return result;
}

double lg2(int n)
{
    double result = pow(2, log(n));
    return result;
}

double lg3(int n)
{
    double result = pow(n, 1 / log(n));
    return result;
}

int pow3(int n)
{
    int result = n * pow(2, n);
    return result;
}

double lg4(int n)
{
    double result = pow(0.5, log(n));
    return result;
}

int main()
{
    int n;
    printf("Number \t n^3 \t (3/2)^n \t n \t 2^n \t ln(n) \t e^n \t 2^lg(n) \t "
           "1/lg(n)^n \t n*n^2 \t lg(n)^0.5 \n");
    for (n = 0; n < 101; n++)
    {
        printf("%d \t %d \t %.2f \t %d \t %d \t %.2f \t %.2f \t %.2f \t %d \t %.2f "
               "\t %.2f\n",
               n, cube(n), pow1(n), num(n), power2(n), lg(n), e(n), lg2(n), lg3(n),
               pow3(n), lg4(n));
    }

    return 0;
}