#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)26364;
int var_1 = -1310757102;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)210;
unsigned int var_5 = 271510851U;
int var_7 = 1888610054;
int var_8 = 1147742970;
long long int var_11 = 7752080456579642365LL;
short var_13 = (short)-19582;
int zero = 0;
short var_14 = (short)-11569;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)23020;
short var_17 = (short)9511;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
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
