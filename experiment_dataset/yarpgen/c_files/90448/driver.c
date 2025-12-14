#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_4 = 142001757;
unsigned short var_6 = (unsigned short)50950;
unsigned long long int var_7 = 16625666079793557147ULL;
unsigned short var_12 = (unsigned short)31857;
unsigned short var_14 = (unsigned short)21998;
unsigned short var_15 = (unsigned short)8115;
int zero = 0;
unsigned int var_18 = 4105328085U;
unsigned long long int var_19 = 2640325670044690696ULL;
unsigned int var_20 = 260280612U;
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
