#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)84;
unsigned long long int var_2 = 6174292924395151603ULL;
int var_3 = -1265022641;
signed char var_4 = (signed char)4;
unsigned int var_5 = 2675526395U;
short var_6 = (short)-9257;
unsigned long long int var_7 = 11273545040783388280ULL;
short var_8 = (short)20481;
int zero = 0;
_Bool var_11 = (_Bool)0;
int var_12 = 1837028393;
signed char var_13 = (signed char)77;
int var_14 = 575213717;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
