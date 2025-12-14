#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
unsigned int var_16 = 4018466289U;
unsigned int var_18 = 2353293499U;
int zero = 0;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)42;
signed char var_21 = (signed char)-11;
short var_22 = (short)1682;
unsigned int var_23 = 1085553926U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
