#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_2 = (signed char)16;
unsigned int var_3 = 1740458614U;
unsigned char var_4 = (unsigned char)107;
unsigned char var_5 = (unsigned char)56;
signed char var_15 = (signed char)-54;
int zero = 0;
unsigned int var_18 = 3930891977U;
short var_19 = (short)-7236;
void init() {
}

void checksum() {
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
