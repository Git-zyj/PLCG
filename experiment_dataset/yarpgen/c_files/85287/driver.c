#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)151;
unsigned int var_3 = 4175380806U;
int var_4 = -1159784192;
unsigned long long int var_5 = 6404958798676935022ULL;
signed char var_8 = (signed char)41;
unsigned char var_10 = (unsigned char)49;
signed char var_11 = (signed char)110;
int zero = 0;
unsigned char var_12 = (unsigned char)203;
short var_13 = (short)-14746;
short var_14 = (short)3552;
unsigned long long int var_15 = 12926620124331380238ULL;
long long int var_16 = -8908173900531606189LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
