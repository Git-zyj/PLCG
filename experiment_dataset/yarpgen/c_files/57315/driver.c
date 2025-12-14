#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-13324;
short var_7 = (short)-28958;
_Bool var_10 = (_Bool)0;
unsigned int var_12 = 3214634372U;
unsigned int var_15 = 3123750702U;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned int var_20 = 4177463952U;
unsigned int var_21 = 4244456138U;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)0;
short var_24 = (short)18345;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
