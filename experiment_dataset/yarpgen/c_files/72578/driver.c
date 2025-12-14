#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)140;
long long int var_3 = -5817938860418188452LL;
unsigned int var_5 = 688578662U;
unsigned short var_13 = (unsigned short)51263;
unsigned int var_14 = 696704910U;
int zero = 0;
unsigned int var_15 = 2168966287U;
signed char var_16 = (signed char)-124;
short var_17 = (short)9575;
void init() {
}

void checksum() {
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
