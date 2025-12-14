#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = 1419919491199301617LL;
long long int var_3 = -6245571166180967422LL;
short var_6 = (short)24961;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 3968799042U;
int zero = 0;
short var_10 = (short)-16794;
int var_11 = 203555303;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
