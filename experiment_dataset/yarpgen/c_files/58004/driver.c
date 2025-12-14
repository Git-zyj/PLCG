#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)30122;
unsigned char var_1 = (unsigned char)232;
long long int var_4 = -4219956035342642628LL;
unsigned long long int var_6 = 9551005388817197106ULL;
unsigned int var_8 = 3731856186U;
unsigned short var_10 = (unsigned short)47178;
signed char var_11 = (signed char)-95;
int zero = 0;
unsigned int var_13 = 2929388085U;
unsigned long long int var_14 = 10630311729569410318ULL;
unsigned char var_15 = (unsigned char)90;
signed char var_16 = (signed char)15;
unsigned char var_17 = (unsigned char)31;
int var_18 = 1315897739;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
