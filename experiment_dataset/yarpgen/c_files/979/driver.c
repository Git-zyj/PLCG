#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 293823618;
int var_1 = 108356860;
_Bool var_6 = (_Bool)0;
_Bool var_8 = (_Bool)0;
int var_13 = -185212023;
_Bool var_15 = (_Bool)1;
_Bool var_17 = (_Bool)1;
int var_19 = 1675169509;
int zero = 0;
_Bool var_20 = (_Bool)0;
int var_21 = -498486320;
int var_22 = -580137931;
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
