#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13617401227100867375ULL;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 1321245920825444178ULL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 11989589204506235311ULL;
unsigned long long int var_13 = 13299057276230382079ULL;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)0;
int zero = 0;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
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
