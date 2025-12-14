#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = -1656609814;
_Bool var_10 = (_Bool)0;
int var_12 = 1501095517;
unsigned long long int var_14 = 12156975738640418531ULL;
int zero = 0;
long long int var_15 = 5682072717043206269LL;
unsigned char var_16 = (unsigned char)79;
void init() {
}

void checksum() {
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
