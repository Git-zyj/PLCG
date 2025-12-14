#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4184219825483969994LL;
unsigned int var_7 = 1350805389U;
unsigned int var_8 = 3010731188U;
int zero = 0;
_Bool var_14 = (_Bool)1;
long long int var_15 = -7562915870572325569LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
