#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -357129402508141989LL;
unsigned char var_8 = (unsigned char)26;
int var_13 = 1844844926;
unsigned long long int var_19 = 8383396514833460269ULL;
int zero = 0;
long long int var_20 = -2524557268612894682LL;
_Bool var_21 = (_Bool)1;
short var_22 = (short)26565;
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
