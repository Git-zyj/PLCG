#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)4844;
signed char var_7 = (signed char)59;
unsigned short var_8 = (unsigned short)46857;
int zero = 0;
signed char var_14 = (signed char)18;
int var_15 = -91759867;
_Bool var_16 = (_Bool)1;
short var_17 = (short)8515;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
