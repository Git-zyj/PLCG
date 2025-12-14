#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6768;
unsigned char var_5 = (unsigned char)33;
short var_6 = (short)16001;
unsigned int var_8 = 1511358837U;
int var_9 = -845921685;
unsigned int var_10 = 605180667U;
_Bool var_11 = (_Bool)1;
int zero = 0;
short var_12 = (short)9314;
int var_13 = 337209403;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)150;
short var_16 = (short)7639;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
