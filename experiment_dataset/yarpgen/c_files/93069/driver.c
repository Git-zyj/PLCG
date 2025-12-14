#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15332713219181196110ULL;
int var_2 = -687999606;
unsigned short var_6 = (unsigned short)7516;
_Bool var_11 = (_Bool)0;
short var_16 = (short)14;
int zero = 0;
long long int var_17 = -6841437439153530589LL;
unsigned int var_18 = 2253313046U;
long long int var_19 = 5609336827939418668LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
