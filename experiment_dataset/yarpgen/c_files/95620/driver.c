#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -3936729453028816351LL;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)61471;
unsigned short var_12 = (unsigned short)4941;
unsigned long long int var_13 = 425800177968169031ULL;
int zero = 0;
unsigned int var_17 = 2272512829U;
signed char var_18 = (signed char)54;
unsigned char var_19 = (unsigned char)5;
short var_20 = (short)17463;
void init() {
}

void checksum() {
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
