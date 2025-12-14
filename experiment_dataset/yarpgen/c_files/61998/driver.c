#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)29400;
unsigned short var_4 = (unsigned short)39359;
_Bool var_7 = (_Bool)0;
unsigned char var_11 = (unsigned char)147;
unsigned short var_12 = (unsigned short)14528;
int zero = 0;
short var_13 = (short)20680;
short var_14 = (short)4767;
short var_15 = (short)29952;
signed char var_16 = (signed char)53;
void init() {
}

void checksum() {
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
