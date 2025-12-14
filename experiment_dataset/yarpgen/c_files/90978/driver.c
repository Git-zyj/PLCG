#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)96;
long long int var_4 = -6420524499459250849LL;
unsigned short var_5 = (unsigned short)35976;
unsigned short var_6 = (unsigned short)12852;
unsigned char var_7 = (unsigned char)51;
long long int var_12 = -5381285422653417513LL;
int zero = 0;
unsigned char var_13 = (unsigned char)82;
unsigned char var_14 = (unsigned char)82;
unsigned int var_15 = 3520415500U;
unsigned long long int var_16 = 9814548498150179142ULL;
void init() {
}

void checksum() {
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
