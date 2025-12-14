#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3335358915U;
long long int var_5 = 3016423462805830087LL;
long long int var_12 = -6675118279424611262LL;
int zero = 0;
_Bool var_18 = (_Bool)0;
short var_19 = (short)-26012;
void init() {
}

void checksum() {
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
