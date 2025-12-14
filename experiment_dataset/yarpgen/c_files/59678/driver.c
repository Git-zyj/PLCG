#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4542118243560039565LL;
unsigned long long int var_8 = 4575376409952673429ULL;
unsigned int var_9 = 565499297U;
short var_11 = (short)-20103;
long long int var_13 = 5986892223005305207LL;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)-46;
int zero = 0;
int var_19 = 30595748;
long long int var_20 = -6327994880660766671LL;
unsigned int var_21 = 503007102U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
