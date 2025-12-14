#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -445744849;
int var_1 = 1405541077;
unsigned int var_6 = 1295372083U;
short var_7 = (short)6990;
unsigned int var_8 = 491625985U;
short var_10 = (short)-28482;
int zero = 0;
unsigned char var_11 = (unsigned char)242;
int var_12 = -2081276830;
int var_13 = 1369073394;
unsigned long long int var_14 = 1394086177077164404ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
