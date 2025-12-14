#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 2176982979730776350ULL;
unsigned int var_6 = 1352283635U;
long long int var_8 = -1821616731230154824LL;
short var_11 = (short)27869;
unsigned short var_12 = (unsigned short)46354;
int zero = 0;
unsigned char var_13 = (unsigned char)115;
short var_14 = (short)2287;
long long int var_15 = -988602666755321704LL;
_Bool var_16 = (_Bool)1;
int var_17 = 729184118;
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
