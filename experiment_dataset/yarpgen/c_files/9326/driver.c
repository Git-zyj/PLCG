#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)23963;
int var_2 = 682526563;
int var_3 = -1178160689;
long long int var_9 = -3819805952089252368LL;
int var_11 = 1779718421;
int zero = 0;
unsigned short var_18 = (unsigned short)63149;
int var_19 = 748044521;
int var_20 = 1336639409;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
