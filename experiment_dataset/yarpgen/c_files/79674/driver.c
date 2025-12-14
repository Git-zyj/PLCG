#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14758278023894727683ULL;
unsigned long long int var_3 = 17417427216255839968ULL;
unsigned long long int var_6 = 11791835979616196851ULL;
unsigned long long int var_8 = 5361718862026112376ULL;
unsigned long long int var_10 = 3322207415305233733ULL;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 4025299300611839712ULL;
unsigned long long int var_15 = 8920558194247494903ULL;
int zero = 0;
int var_18 = 591418731;
long long int var_19 = 8191757323400806797LL;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 10971042029480833591ULL;
int var_22 = -759945566;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
