#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2065616688;
long long int var_3 = -6104438338386300128LL;
_Bool var_4 = (_Bool)1;
int var_6 = -553357132;
unsigned int var_9 = 936749295U;
_Bool var_17 = (_Bool)1;
int zero = 0;
int var_19 = -567545110;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)1;
long long int var_22 = 8110542964221626979LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
