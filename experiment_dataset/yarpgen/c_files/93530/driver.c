#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned char var_7 = (unsigned char)91;
signed char var_9 = (signed char)107;
unsigned int var_10 = 3648292423U;
unsigned int var_12 = 254979090U;
signed char var_14 = (signed char)127;
int zero = 0;
unsigned int var_16 = 3551558958U;
_Bool var_17 = (_Bool)1;
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
