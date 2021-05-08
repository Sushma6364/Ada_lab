#include <stdio.h>
#include<time.h>
int gcd(int n1, int n2);
int main() {
	clock_t start,end;
    double time;
    int n1, n2,result;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    start=clock();
    result=gcd(n1,n2);
    end=clock();
    time=(double)(end-start)/CLOCKS_PER_SEC;
    printf("G.C.D of %d and %d is %d\n", n1, n2, result);
    printf("The time taken=%f\n",time);
    return 0;
}

int gcd(int n1, int n2) {
    if (n2 != 0)
        return gcd(n2, n1 % n2);
    else
        return n1;
}