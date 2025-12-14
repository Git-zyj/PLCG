#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -200894409;
signed char var_2 = (signed char)-55;
unsigned int var_3 = 2709311052U;
int zero = 0;
_Bool var_14 = (_Bool)0;
int var_15 = -1399534774;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-4295;
void init() {
}

void checksum() {
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
