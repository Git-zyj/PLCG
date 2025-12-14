#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 915225247U;
unsigned char var_5 = (unsigned char)238;
unsigned char var_6 = (unsigned char)220;
unsigned int var_9 = 2691694629U;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned int var_14 = 585814583U;
signed char var_15 = (signed char)41;
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
