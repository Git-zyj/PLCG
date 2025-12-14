#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4431436384094289407LL;
long long int var_1 = -5770873118092408079LL;
short var_4 = (short)-3446;
short var_5 = (short)30160;
short var_6 = (short)24490;
int zero = 0;
signed char var_13 = (signed char)85;
short var_14 = (short)20907;
unsigned int var_15 = 218629853U;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
