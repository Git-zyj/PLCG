#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)56037;
signed char var_1 = (signed char)-53;
unsigned int var_2 = 2769826017U;
unsigned long long int var_3 = 10199145041703803358ULL;
signed char var_7 = (signed char)-36;
unsigned short var_8 = (unsigned short)20038;
unsigned char var_9 = (unsigned char)14;
short var_12 = (short)31985;
int zero = 0;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-10685;
void init() {
}

void checksum() {
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
