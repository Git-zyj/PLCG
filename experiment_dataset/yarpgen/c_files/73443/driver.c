#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)12;
unsigned short var_2 = (unsigned short)53277;
unsigned short var_4 = (unsigned short)60874;
unsigned long long int var_6 = 15739197830990904272ULL;
short var_7 = (short)-8901;
int zero = 0;
unsigned short var_14 = (unsigned short)25985;
unsigned short var_15 = (unsigned short)25589;
signed char var_16 = (signed char)28;
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
