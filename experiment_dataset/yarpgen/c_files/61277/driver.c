#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_2 = (signed char)-96;
unsigned char var_7 = (unsigned char)68;
signed char var_8 = (signed char)108;
long long int var_10 = 1498246233845489714LL;
unsigned char var_12 = (unsigned char)200;
unsigned int var_13 = 778730330U;
int zero = 0;
short var_14 = (short)15509;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 3358206199U;
signed char var_17 = (signed char)38;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
