#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 1942021663;
long long int var_10 = 725901056292000461LL;
unsigned int var_12 = 1984486955U;
_Bool var_16 = (_Bool)1;
int zero = 0;
signed char var_17 = (signed char)-80;
signed char var_18 = (signed char)-4;
signed char var_19 = (signed char)49;
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
