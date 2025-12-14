#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 7771616925753365195ULL;
unsigned long long int var_2 = 8569306630828719944ULL;
_Bool var_3 = (_Bool)1;
unsigned long long int var_7 = 746234009295031410ULL;
int var_8 = -2078780824;
unsigned int var_9 = 2686617722U;
unsigned short var_11 = (unsigned short)6858;
int zero = 0;
long long int var_12 = -3466669724644942543LL;
signed char var_13 = (signed char)51;
signed char var_14 = (signed char)-53;
signed char var_15 = (signed char)-24;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
