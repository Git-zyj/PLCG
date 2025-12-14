#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3396504152U;
_Bool var_4 = (_Bool)1;
short var_5 = (short)-1916;
short var_10 = (short)14458;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned short var_16 = (unsigned short)54428;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)43186;
long long int var_19 = -5979383404437117670LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
