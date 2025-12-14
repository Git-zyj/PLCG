#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2025234936;
int var_4 = -1658865774;
signed char var_6 = (signed char)-77;
int var_13 = 483795714;
signed char var_14 = (signed char)63;
int zero = 0;
int var_15 = -189687286;
short var_16 = (short)-11077;
signed char var_17 = (signed char)-99;
short var_18 = (short)-9909;
int var_19 = -1788261241;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
