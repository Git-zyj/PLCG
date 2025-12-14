#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)13627;
int var_4 = -590300187;
short var_6 = (short)32637;
_Bool var_8 = (_Bool)0;
int zero = 0;
signed char var_13 = (signed char)-83;
signed char var_14 = (signed char)-92;
int var_15 = -1790315409;
signed char var_16 = (signed char)80;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
