#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
unsigned char var_7 = (unsigned char)69;
int var_16 = -552675310;
int var_17 = 1551359283;
short var_18 = (short)-7647;
long long int var_19 = -3850969495463833095LL;
int zero = 0;
int var_20 = -1423861606;
unsigned char var_21 = (unsigned char)43;
unsigned char var_22 = (unsigned char)224;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
