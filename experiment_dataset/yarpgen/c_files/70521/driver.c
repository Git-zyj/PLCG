#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 1962400199U;
unsigned long long int var_8 = 13994565141315475805ULL;
unsigned int var_9 = 116470556U;
long long int var_10 = 8882453970571158509LL;
int zero = 0;
int var_11 = -941144874;
long long int var_12 = -2112123253324867557LL;
void init() {
}

void checksum() {
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
