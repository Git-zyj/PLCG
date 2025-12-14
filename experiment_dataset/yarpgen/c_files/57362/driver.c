#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)1;
unsigned short var_10 = (unsigned short)28198;
_Bool var_12 = (_Bool)1;
unsigned int var_14 = 3456372947U;
unsigned long long int var_17 = 10574307141219496488ULL;
int var_18 = -396599219;
long long int var_19 = -1252124202453360901LL;
int zero = 0;
unsigned int var_20 = 2496748153U;
unsigned long long int var_21 = 6401167421504352397ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
