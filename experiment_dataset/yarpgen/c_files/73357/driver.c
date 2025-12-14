#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
signed char var_8 = (signed char)-97;
unsigned char var_11 = (unsigned char)151;
unsigned long long int var_14 = 11120385086550883092ULL;
unsigned int var_15 = 3565188889U;
unsigned int var_16 = 1390951523U;
int zero = 0;
unsigned char var_17 = (unsigned char)67;
short var_18 = (short)495;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
