#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18407;
unsigned char var_1 = (unsigned char)248;
unsigned long long int var_3 = 11338269211338026363ULL;
int var_4 = -201929774;
unsigned char var_5 = (unsigned char)46;
unsigned int var_9 = 2061437106U;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned char var_12 = (unsigned char)57;
long long int var_13 = 9147892265548482458LL;
unsigned char var_14 = (unsigned char)123;
unsigned int var_15 = 2808453780U;
unsigned char var_16 = (unsigned char)99;
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
