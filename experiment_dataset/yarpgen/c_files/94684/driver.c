#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62392;
unsigned int var_1 = 2399277761U;
_Bool var_2 = (_Bool)1;
_Bool var_6 = (_Bool)1;
long long int var_9 = -5564075529755983686LL;
signed char var_10 = (signed char)-77;
int zero = 0;
unsigned int var_11 = 3080696219U;
_Bool var_12 = (_Bool)1;
long long int var_13 = 934972503299185288LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
