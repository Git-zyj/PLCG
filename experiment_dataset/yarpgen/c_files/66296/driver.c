#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6194;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 543752718U;
int var_4 = -2108672218;
int var_6 = -274248782;
signed char var_7 = (signed char)-123;
int var_8 = -206410927;
unsigned char var_13 = (unsigned char)51;
int zero = 0;
int var_16 = 1457424156;
signed char var_17 = (signed char)108;
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
