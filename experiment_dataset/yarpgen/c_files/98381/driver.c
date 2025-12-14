#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned int var_4 = 4147934380U;
_Bool var_8 = (_Bool)0;
int var_9 = -1653484139;
_Bool var_10 = (_Bool)0;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 3316082967060616504ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
