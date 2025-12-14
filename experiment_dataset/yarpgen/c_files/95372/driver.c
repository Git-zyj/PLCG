#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)18491;
unsigned char var_4 = (unsigned char)162;
unsigned int var_5 = 4041000380U;
short var_6 = (short)-7495;
unsigned int var_7 = 1990083232U;
signed char var_8 = (signed char)76;
unsigned int var_9 = 2245864576U;
int zero = 0;
unsigned char var_13 = (unsigned char)161;
signed char var_14 = (signed char)86;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
