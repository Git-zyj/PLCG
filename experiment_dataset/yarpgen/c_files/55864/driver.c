#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_3 = 1510745971262804896LL;
short var_4 = (short)-13151;
short var_5 = (short)-19191;
_Bool var_8 = (_Bool)0;
short var_13 = (short)-31529;
short var_14 = (short)-24077;
unsigned int var_15 = 1376487791U;
signed char var_16 = (signed char)-31;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned int var_19 = 498676980U;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)8;
signed char var_22 = (signed char)125;
unsigned char var_23 = (unsigned char)77;
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
