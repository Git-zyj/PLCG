#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)82;
unsigned char var_5 = (unsigned char)24;
unsigned long long int var_7 = 4109699354882581716ULL;
int zero = 0;
int var_13 = -1333969533;
unsigned short var_14 = (unsigned short)46641;
signed char var_15 = (signed char)-122;
unsigned char var_16 = (unsigned char)155;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
