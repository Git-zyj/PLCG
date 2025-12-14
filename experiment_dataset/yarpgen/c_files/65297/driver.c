#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-6836;
signed char var_4 = (signed char)-31;
unsigned char var_6 = (unsigned char)56;
unsigned int var_12 = 3830163547U;
signed char var_14 = (signed char)-12;
unsigned long long int var_16 = 11483894383511099726ULL;
int zero = 0;
signed char var_17 = (signed char)1;
_Bool var_18 = (_Bool)1;
short var_19 = (short)-26882;
_Bool var_20 = (_Bool)0;
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
