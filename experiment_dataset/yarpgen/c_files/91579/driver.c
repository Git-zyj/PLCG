#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 507629281;
unsigned long long int var_3 = 5754720392044409876ULL;
short var_4 = (short)-5144;
unsigned short var_5 = (unsigned short)35339;
signed char var_8 = (signed char)-13;
short var_11 = (short)5505;
short var_12 = (short)29779;
unsigned short var_13 = (unsigned short)58571;
int zero = 0;
short var_15 = (short)11044;
signed char var_16 = (signed char)88;
unsigned long long int var_17 = 1533079176668227450ULL;
unsigned char var_18 = (unsigned char)108;
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
