#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1594041707;
short var_3 = (short)-24622;
unsigned char var_5 = (unsigned char)142;
unsigned int var_6 = 2848687781U;
int var_7 = -1097434375;
short var_8 = (short)-26867;
unsigned short var_9 = (unsigned short)22459;
unsigned long long int var_10 = 2531339512588106811ULL;
unsigned short var_12 = (unsigned short)37160;
_Bool var_14 = (_Bool)1;
int zero = 0;
short var_15 = (short)-11660;
unsigned int var_16 = 1559217392U;
void init() {
}

void checksum() {
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
