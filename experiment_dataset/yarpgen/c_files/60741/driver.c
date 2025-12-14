#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -6853621237737911203LL;
unsigned char var_8 = (unsigned char)31;
long long int var_10 = 6964986786507142447LL;
signed char var_14 = (signed char)95;
int zero = 0;
short var_16 = (short)-4315;
unsigned long long int var_17 = 15147438705740737463ULL;
unsigned long long int var_18 = 18332803337945410560ULL;
int var_19 = 2087757499;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
