#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)25704;
long long int var_10 = 1978685661232196357LL;
int var_13 = 1741888291;
long long int var_14 = 9129573723142499877LL;
unsigned short var_17 = (unsigned short)21943;
int zero = 0;
long long int var_18 = 5115789091193395735LL;
unsigned char var_19 = (unsigned char)1;
signed char var_20 = (signed char)28;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
