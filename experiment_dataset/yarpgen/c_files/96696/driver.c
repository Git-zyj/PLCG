#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -354135337;
int var_2 = 285868327;
_Bool var_4 = (_Bool)0;
_Bool var_8 = (_Bool)0;
unsigned short var_10 = (unsigned short)4883;
signed char var_12 = (signed char)46;
unsigned char var_14 = (unsigned char)82;
int zero = 0;
int var_16 = -1946612447;
unsigned char var_17 = (unsigned char)62;
signed char var_18 = (signed char)92;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
