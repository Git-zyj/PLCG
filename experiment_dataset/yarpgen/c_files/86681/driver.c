#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -181570231;
unsigned char var_10 = (unsigned char)36;
unsigned short var_15 = (unsigned short)34113;
unsigned long long int var_17 = 12586552534694203648ULL;
unsigned int var_18 = 1687405663U;
int zero = 0;
short var_19 = (short)30807;
int var_20 = -773151735;
int var_21 = 878512893;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
