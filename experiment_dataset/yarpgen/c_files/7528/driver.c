#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)0;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)0;
unsigned long long int var_13 = 14565096890648304229ULL;
signed char var_14 = (signed char)-12;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 175211958U;
signed char var_17 = (signed char)-41;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
