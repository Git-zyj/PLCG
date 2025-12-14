#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)25;
int var_1 = -2053076997;
short var_4 = (short)-31074;
unsigned char var_10 = (unsigned char)53;
unsigned int var_12 = 4234756035U;
int zero = 0;
long long int var_13 = -3222057566108486397LL;
signed char var_14 = (signed char)65;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
