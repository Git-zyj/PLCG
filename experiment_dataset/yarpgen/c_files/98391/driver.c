#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-27278;
unsigned short var_5 = (unsigned short)40035;
_Bool var_7 = (_Bool)1;
int var_8 = 1126055778;
unsigned int var_10 = 1955244992U;
int zero = 0;
short var_14 = (short)-4964;
int var_15 = 788608456;
long long int var_16 = -2009475917489865782LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
