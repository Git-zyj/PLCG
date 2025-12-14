#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1045339299;
unsigned char var_8 = (unsigned char)20;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned int var_15 = 415736458U;
int var_16 = -2105375466;
short var_17 = (short)19798;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 458587431U;
unsigned short var_20 = (unsigned short)64965;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
