#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4089517434U;
_Bool var_2 = (_Bool)1;
signed char var_7 = (signed char)61;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned short var_16 = (unsigned short)9003;
unsigned short var_17 = (unsigned short)3467;
void init() {
}

void checksum() {
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
