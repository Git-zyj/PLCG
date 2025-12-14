#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -115341988;
unsigned int var_7 = 1451178901U;
signed char var_8 = (signed char)-45;
unsigned long long int var_11 = 3707239677828191612ULL;
long long int var_13 = -3795316445157071119LL;
int zero = 0;
short var_14 = (short)-31527;
signed char var_15 = (signed char)87;
short var_16 = (short)-12837;
void init() {
}

void checksum() {
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
