#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5788509997593315036LL;
unsigned int var_5 = 442858422U;
long long int var_6 = 5430317965718369182LL;
unsigned short var_8 = (unsigned short)22903;
unsigned char var_9 = (unsigned char)215;
signed char var_11 = (signed char)124;
short var_12 = (short)-7478;
signed char var_13 = (signed char)-78;
int zero = 0;
unsigned long long int var_14 = 4828325723579665624ULL;
unsigned char var_15 = (unsigned char)115;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 1056452511U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
