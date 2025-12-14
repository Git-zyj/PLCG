#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)22880;
unsigned short var_1 = (unsigned short)55114;
_Bool var_3 = (_Bool)1;
int var_4 = 1615926538;
unsigned char var_8 = (unsigned char)12;
long long int var_10 = 8060166580682590303LL;
int zero = 0;
long long int var_11 = -9057490965860457548LL;
long long int var_12 = -7520111093762057523LL;
int var_13 = -1467298283;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
