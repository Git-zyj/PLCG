#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 11008973709233803402ULL;
_Bool var_6 = (_Bool)0;
int var_7 = -1729362768;
int var_10 = -46313964;
int zero = 0;
unsigned int var_12 = 4159915235U;
long long int var_13 = 6230943755780669485LL;
short var_14 = (short)-28095;
unsigned long long int var_15 = 7841088938008520145ULL;
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
