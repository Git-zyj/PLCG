#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)64634;
unsigned short var_1 = (unsigned short)19707;
unsigned short var_4 = (unsigned short)14353;
_Bool var_6 = (_Bool)1;
int zero = 0;
signed char var_13 = (signed char)-92;
short var_14 = (short)23604;
short var_15 = (short)-7774;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
