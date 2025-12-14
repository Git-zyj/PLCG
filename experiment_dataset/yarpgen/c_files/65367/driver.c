#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)103;
unsigned int var_5 = 1000446752U;
long long int var_9 = -2717724207638595181LL;
int zero = 0;
unsigned short var_13 = (unsigned short)28873;
_Bool var_14 = (_Bool)1;
long long int var_15 = 6368318524105683365LL;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
