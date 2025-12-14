#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)16300;
unsigned char var_3 = (unsigned char)91;
int var_5 = -1085005613;
int var_6 = 1573489609;
long long int var_7 = -4663880156194642535LL;
unsigned long long int var_8 = 4332150241346155894ULL;
int zero = 0;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 2493673077U;
unsigned long long int var_17 = 14474359476777419156ULL;
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
