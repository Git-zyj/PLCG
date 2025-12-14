#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7194841691414537650LL;
long long int var_4 = -745502394692185900LL;
unsigned long long int var_6 = 12774090946532836183ULL;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 3726998043U;
int zero = 0;
signed char var_11 = (signed char)-50;
unsigned short var_12 = (unsigned short)6162;
short var_13 = (short)9103;
long long int var_14 = 5049478993880690589LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
