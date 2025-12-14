#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)12;
unsigned short var_3 = (unsigned short)5848;
long long int var_8 = -3237340674462659637LL;
int var_11 = -1458040718;
short var_13 = (short)16421;
short var_14 = (short)20581;
int zero = 0;
int var_15 = 29136252;
unsigned char var_16 = (unsigned char)101;
short var_17 = (short)-21929;
void init() {
}

void checksum() {
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
