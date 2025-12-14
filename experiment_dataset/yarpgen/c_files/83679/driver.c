#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3748038058U;
int var_3 = -1589208403;
_Bool var_5 = (_Bool)0;
unsigned short var_11 = (unsigned short)38899;
int zero = 0;
int var_14 = -1078600890;
unsigned int var_15 = 1712718085U;
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
