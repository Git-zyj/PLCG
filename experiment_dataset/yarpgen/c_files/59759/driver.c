#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_7 = (_Bool)1;
unsigned short var_10 = (unsigned short)48793;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)1;
_Bool var_15 = (_Bool)0;
unsigned short var_17 = (unsigned short)9;
int zero = 0;
int var_18 = 1563669352;
unsigned short var_19 = (unsigned short)40201;
long long int var_20 = 896684846421100322LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
