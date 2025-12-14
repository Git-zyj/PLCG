#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 7978701493630853552LL;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)0;
long long int var_12 = 586864884029613794LL;
int zero = 0;
unsigned short var_14 = (unsigned short)30639;
long long int var_15 = 5575048112455654451LL;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
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
