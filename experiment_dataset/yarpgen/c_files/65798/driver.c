#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)114;
unsigned short var_8 = (unsigned short)64623;
unsigned int var_9 = 2396823599U;
short var_12 = (short)-19493;
unsigned int var_13 = 3000057148U;
unsigned int var_16 = 1603711848U;
unsigned int var_18 = 3389800799U;
int zero = 0;
unsigned int var_19 = 469393311U;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)55430;
unsigned int var_22 = 3221366316U;
_Bool var_23 = (_Bool)1;
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
