#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = 191508754;
unsigned char var_8 = (unsigned char)32;
unsigned long long int var_9 = 5800086961038934161ULL;
unsigned int var_12 = 2499128694U;
int zero = 0;
short var_13 = (short)2148;
long long int var_14 = 4438213402208687260LL;
short var_15 = (short)-16847;
unsigned int var_16 = 4194222083U;
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
