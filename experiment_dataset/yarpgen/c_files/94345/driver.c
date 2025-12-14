#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)26662;
unsigned int var_3 = 4151694578U;
unsigned int var_4 = 3094273122U;
unsigned int var_5 = 1936551279U;
unsigned int var_11 = 4240041459U;
unsigned short var_12 = (unsigned short)21979;
int zero = 0;
int var_13 = 2036854154;
unsigned short var_14 = (unsigned short)51030;
unsigned int var_15 = 467659897U;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 2748856036U;
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
