#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-9907;
unsigned char var_5 = (unsigned char)193;
short var_8 = (short)-9915;
short var_11 = (short)-14704;
signed char var_12 = (signed char)64;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 2635914609U;
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
