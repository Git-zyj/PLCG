#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_2 = -3345812999942164849LL;
unsigned int var_9 = 3507361299U;
unsigned long long int var_11 = 17044987137014868514ULL;
int zero = 0;
unsigned long long int var_13 = 5390334478398587380ULL;
long long int var_14 = 8287886177854766654LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
