#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13043438968124233543ULL;
unsigned char var_3 = (unsigned char)205;
unsigned short var_5 = (unsigned short)39209;
signed char var_8 = (signed char)-55;
unsigned int var_10 = 612936242U;
int zero = 0;
unsigned int var_14 = 2907173958U;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)146;
void init() {
}

void checksum() {
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
