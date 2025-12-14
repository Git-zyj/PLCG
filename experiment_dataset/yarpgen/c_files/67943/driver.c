#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4694045114281621950LL;
signed char var_1 = (signed char)-14;
long long int var_6 = 4370220259566620686LL;
unsigned int var_7 = 1388457296U;
_Bool var_10 = (_Bool)1;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)58386;
int zero = 0;
short var_14 = (short)12895;
long long int var_15 = 3792840524848977250LL;
long long int var_16 = -8669377981008213961LL;
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
