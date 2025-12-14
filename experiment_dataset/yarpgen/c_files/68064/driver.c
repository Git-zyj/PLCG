#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-5203;
unsigned short var_5 = (unsigned short)56676;
unsigned int var_8 = 2216381044U;
unsigned int var_9 = 1975824372U;
long long int var_11 = -6064442658097604152LL;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned short var_18 = (unsigned short)21347;
unsigned short var_19 = (unsigned short)20540;
short var_20 = (short)26821;
void init() {
}

void checksum() {
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
