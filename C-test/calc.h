typedef struct Calc {
    long (*sum)(long a,long b);
    long (*sub)(long a,long b);
    long (*divi)(long a,long b);
    long (*mul)(long a,long b);
} Calc;

Calc *newCalc();
void destroyCalc(Calc *c);