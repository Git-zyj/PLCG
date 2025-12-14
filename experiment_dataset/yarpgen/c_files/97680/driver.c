#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)13199;
unsigned short var_2 = (unsigned short)5747;
unsigned short var_3 = (unsigned short)65071;
unsigned long long int var_4 = 16718610997630697584ULL;
unsigned short var_5 = (unsigned short)39119;
unsigned short var_7 = (unsigned short)14107;
unsigned long long int var_10 = 12453638403375864788ULL;
int zero = 0;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)57070;
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
