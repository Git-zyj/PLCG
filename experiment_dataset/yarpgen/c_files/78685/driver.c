#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)222;
_Bool var_3 = (_Bool)1;
int var_5 = -1158247252;
int var_9 = 661281711;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned long long int var_13 = 10182156558875238565ULL;
unsigned int var_14 = 3798502093U;
unsigned long long int var_15 = 8560128098416934559ULL;
void init() {
}

void checksum() {
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
