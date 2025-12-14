#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)55019;
signed char var_4 = (signed char)97;
_Bool var_5 = (_Bool)0;
unsigned long long int var_10 = 5418238140073151496ULL;
unsigned long long int var_11 = 14959871530752947037ULL;
unsigned char var_13 = (unsigned char)109;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 3818518348U;
int var_16 = 944845281;
unsigned short var_17 = (unsigned short)26120;
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
