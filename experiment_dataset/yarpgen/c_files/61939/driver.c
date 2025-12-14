#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 5053393183497830779LL;
signed char var_8 = (signed char)-115;
unsigned int var_9 = 1980157540U;
_Bool var_11 = (_Bool)0;
_Bool var_15 = (_Bool)1;
_Bool var_19 = (_Bool)1;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 15118357048019484139ULL;
unsigned long long int var_22 = 2506194119797307739ULL;
signed char var_23 = (signed char)-81;
void init() {
}

void checksum() {
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
