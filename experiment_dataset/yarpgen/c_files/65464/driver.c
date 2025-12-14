#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 795323156U;
unsigned int var_1 = 3112895219U;
_Bool var_2 = (_Bool)1;
unsigned short var_5 = (unsigned short)21552;
signed char var_8 = (signed char)-98;
unsigned long long int var_9 = 17357862316199299798ULL;
unsigned long long int var_11 = 8547377493212753833ULL;
unsigned int var_14 = 1299377729U;
int zero = 0;
long long int var_17 = 4024527298300592136LL;
signed char var_18 = (signed char)108;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
