#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)34561;
long long int var_4 = -7209671856140239477LL;
unsigned long long int var_6 = 5371223699911804873ULL;
unsigned char var_7 = (unsigned char)48;
int zero = 0;
unsigned long long int var_10 = 3397239719980461584ULL;
short var_11 = (short)8136;
unsigned char var_12 = (unsigned char)210;
unsigned short var_13 = (unsigned short)24716;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
