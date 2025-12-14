#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3381670950449880736ULL;
unsigned int var_1 = 1409638473U;
unsigned short var_2 = (unsigned short)19675;
unsigned long long int var_6 = 18110144139991707010ULL;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned short var_14 = (unsigned short)62844;
unsigned int var_15 = 1615363191U;
unsigned int var_16 = 2362228021U;
unsigned short var_17 = (unsigned short)51130;
void init() {
}

void checksum() {
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
