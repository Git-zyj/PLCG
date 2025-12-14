#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)54381;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 3821152978470716986ULL;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 2762634643U;
signed char var_7 = (signed char)87;
signed char var_9 = (signed char)-120;
int zero = 0;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 170758401U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
