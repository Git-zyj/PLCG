#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11047335574604965384ULL;
long long int var_4 = -5946859959891268233LL;
short var_12 = (short)23748;
unsigned int var_15 = 3186899616U;
long long int var_16 = 3704163298031746624LL;
unsigned char var_17 = (unsigned char)210;
int zero = 0;
unsigned int var_19 = 2009993076U;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)194;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
