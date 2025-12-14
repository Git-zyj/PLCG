#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-59;
_Bool var_4 = (_Bool)1;
int var_5 = 2021127499;
short var_7 = (short)-1400;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)1;
unsigned short var_11 = (unsigned short)17433;
short var_12 = (short)-16948;
int zero = 0;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-15909;
short var_16 = (short)-3994;
unsigned long long int var_17 = 3659747529095881901ULL;
unsigned int var_18 = 615385691U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
