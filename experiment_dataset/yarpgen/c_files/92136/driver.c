#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)4177;
signed char var_5 = (signed char)-46;
_Bool var_6 = (_Bool)1;
long long int var_7 = 2097321163624919753LL;
signed char var_8 = (signed char)-56;
long long int var_9 = -2020741421119314656LL;
_Bool var_11 = (_Bool)1;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-23;
unsigned long long int var_17 = 17442769981032714852ULL;
int zero = 0;
signed char var_19 = (signed char)46;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)46080;
unsigned long long int var_22 = 15302943277163891494ULL;
long long int var_23 = 8654920932595522279LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
