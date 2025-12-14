#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 217461310U;
long long int var_4 = 4011218033514103927LL;
unsigned long long int var_5 = 5405917898788284870ULL;
unsigned short var_6 = (unsigned short)15749;
unsigned long long int var_8 = 2294238188146607498ULL;
int zero = 0;
short var_10 = (short)-898;
_Bool var_11 = (_Bool)1;
long long int var_12 = -7509917844787620758LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
