#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)116;
unsigned char var_2 = (unsigned char)139;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)28;
signed char var_7 = (signed char)20;
unsigned char var_8 = (unsigned char)81;
int zero = 0;
unsigned int var_15 = 281154667U;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)29311;
unsigned long long int var_18 = 7436609600322400077ULL;
void init() {
}

void checksum() {
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
