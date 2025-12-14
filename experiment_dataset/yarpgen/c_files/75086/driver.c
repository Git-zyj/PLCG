#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_4 = (short)-32627;
unsigned long long int var_5 = 14401240497771949519ULL;
signed char var_6 = (signed char)-12;
unsigned short var_8 = (unsigned short)228;
int zero = 0;
unsigned int var_11 = 2696561754U;
short var_12 = (short)21328;
void init() {
}

void checksum() {
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
