#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned int var_3 = 3464892841U;
unsigned long long int var_6 = 10381811611386053077ULL;
short var_9 = (short)894;
int zero = 0;
unsigned short var_17 = (unsigned short)12022;
int var_18 = 2051263798;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 1082588889U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
