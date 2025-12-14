#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 996708348791845120ULL;
short var_3 = (short)7874;
unsigned long long int var_8 = 5946908686907033377ULL;
unsigned int var_10 = 1517288226U;
short var_12 = (short)-11015;
int zero = 0;
signed char var_17 = (signed char)-102;
unsigned int var_18 = 2083703598U;
unsigned short var_19 = (unsigned short)37652;
unsigned long long int var_20 = 5050857924113329903ULL;
unsigned long long int var_21 = 2015688753698788651ULL;
short var_22 = (short)-25824;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
