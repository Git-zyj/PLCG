#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)40115;
_Bool var_4 = (_Bool)0;
long long int var_8 = 6308473623871311380LL;
unsigned short var_9 = (unsigned short)39449;
_Bool var_10 = (_Bool)1;
int var_11 = 1980882196;
int zero = 0;
unsigned short var_13 = (unsigned short)9245;
int var_14 = -889655876;
int var_15 = -1085731971;
signed char var_16 = (signed char)45;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
