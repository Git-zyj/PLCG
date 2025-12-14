#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60562;
unsigned int var_2 = 2328128109U;
unsigned long long int var_5 = 8339853191890226225ULL;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)2;
long long int var_8 = -8126862490673503611LL;
signed char var_9 = (signed char)-98;
unsigned short var_12 = (unsigned short)2372;
short var_13 = (short)22028;
int zero = 0;
long long int var_17 = 897047423126758115LL;
unsigned short var_18 = (unsigned short)26889;
unsigned short var_19 = (unsigned short)15929;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
