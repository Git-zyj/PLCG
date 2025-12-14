#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)95;
unsigned long long int var_5 = 1348769490227461085ULL;
unsigned int var_6 = 1845797194U;
unsigned char var_8 = (unsigned char)165;
signed char var_9 = (signed char)-44;
unsigned int var_10 = 2741878634U;
long long int var_12 = -8603307374527324399LL;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)238;
void init() {
}

void checksum() {
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
