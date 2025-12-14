#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_7 = 355958103;
unsigned long long int var_8 = 3188267818206169086ULL;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 8010059128597727765ULL;
int var_13 = 1316741951;
int zero = 0;
int var_15 = -238983115;
short var_16 = (short)-9955;
int var_17 = 1052932639;
unsigned long long int var_18 = 5184706208942684859ULL;
short var_19 = (short)5707;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
