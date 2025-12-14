#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2846517717U;
_Bool var_2 = (_Bool)1;
long long int var_4 = 165969059534925783LL;
long long int var_5 = -6854751370182564557LL;
long long int var_6 = -2086817921923158707LL;
int zero = 0;
signed char var_15 = (signed char)40;
long long int var_16 = 3917096979148501622LL;
void init() {
}

void checksum() {
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
