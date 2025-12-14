#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -2085637124;
int var_5 = 1715322156;
int var_7 = 583878952;
short var_12 = (short)-19498;
unsigned long long int var_15 = 9500724126366685169ULL;
int zero = 0;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-36;
unsigned short var_18 = (unsigned short)11672;
unsigned long long int var_19 = 8671832845796380393ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
