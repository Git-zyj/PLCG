#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = 907174546;
int var_2 = 1395595474;
int var_4 = -1415150052;
int var_5 = 1582564721;
int var_6 = -936478323;
int var_8 = 1610043064;
_Bool var_9 = (_Bool)1;
int zero = 0;
_Bool var_10 = (_Bool)0;
int var_11 = 1571634857;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
