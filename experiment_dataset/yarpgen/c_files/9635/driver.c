#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 991249933U;
unsigned int var_3 = 2207170716U;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 3959259926U;
signed char var_8 = (signed char)-47;
unsigned int var_15 = 1288071451U;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)48777;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 1287496425U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
