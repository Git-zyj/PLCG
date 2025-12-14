#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14417;
unsigned short var_4 = (unsigned short)20948;
unsigned short var_5 = (unsigned short)6585;
unsigned short var_6 = (unsigned short)30334;
long long int var_8 = -7460737000617025264LL;
long long int var_9 = -5158523315829276210LL;
int zero = 0;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)-24;
unsigned long long int var_12 = 10368930267773578428ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
