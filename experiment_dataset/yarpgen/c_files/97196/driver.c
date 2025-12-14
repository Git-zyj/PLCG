#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_2 = 2658488608U;
unsigned long long int var_3 = 15295761983201217700ULL;
unsigned int var_5 = 17496361U;
unsigned int var_6 = 3341630083U;
unsigned char var_9 = (unsigned char)27;
int zero = 0;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)5;
unsigned int var_13 = 230062135U;
unsigned long long int var_14 = 12608610622184590445ULL;
unsigned char var_15 = (unsigned char)79;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
