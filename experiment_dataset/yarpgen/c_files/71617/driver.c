#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
long long int var_9 = -7968062248413067852LL;
_Bool var_10 = (_Bool)0;
long long int var_13 = -6662324581870938370LL;
int zero = 0;
int var_14 = 627340228;
unsigned int var_15 = 4076211095U;
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
