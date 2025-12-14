#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11194;
unsigned int var_1 = 3777438091U;
unsigned char var_3 = (unsigned char)162;
unsigned long long int var_6 = 15278629658748075101ULL;
signed char var_8 = (signed char)-18;
int zero = 0;
signed char var_10 = (signed char)6;
signed char var_11 = (signed char)78;
_Bool var_12 = (_Bool)0;
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
