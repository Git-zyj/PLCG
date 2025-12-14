#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)30979;
long long int var_1 = -3229897118830971372LL;
unsigned int var_8 = 3937437417U;
short var_9 = (short)-14119;
unsigned long long int var_10 = 16828567695461214446ULL;
int zero = 0;
short var_11 = (short)14913;
unsigned char var_12 = (unsigned char)28;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
