#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_3 = -507502031;
unsigned short var_4 = (unsigned short)23561;
unsigned short var_9 = (unsigned short)41352;
unsigned int var_11 = 152694040U;
int zero = 0;
short var_12 = (short)5811;
unsigned long long int var_13 = 7772774529548568894ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
