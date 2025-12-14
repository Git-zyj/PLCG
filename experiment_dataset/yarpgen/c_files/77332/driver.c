#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)8815;
unsigned long long int var_2 = 10894295687352245481ULL;
int var_8 = 1678786154;
long long int var_10 = 3731711808710646025LL;
int zero = 0;
unsigned char var_11 = (unsigned char)7;
unsigned long long int var_12 = 14378773729708490170ULL;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
