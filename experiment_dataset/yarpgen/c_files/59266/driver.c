#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_11 = (_Bool)0;
long long int var_14 = 8934213825139890903LL;
_Bool var_18 = (_Bool)0;
int zero = 0;
int var_20 = -1511477689;
long long int var_21 = -8378107529267673024LL;
int var_22 = 1480619423;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
