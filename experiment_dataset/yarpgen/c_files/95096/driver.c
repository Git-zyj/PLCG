#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)87;
unsigned long long int var_2 = 12068230274462162609ULL;
unsigned long long int var_3 = 9182624685407808682ULL;
short var_6 = (short)-11233;
unsigned char var_7 = (unsigned char)94;
unsigned char var_8 = (unsigned char)107;
int zero = 0;
unsigned int var_12 = 3739072434U;
unsigned short var_13 = (unsigned short)635;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
