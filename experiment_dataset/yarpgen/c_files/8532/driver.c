#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)28822;
_Bool var_7 = (_Bool)0;
unsigned short var_10 = (unsigned short)59186;
short var_14 = (short)-21490;
int zero = 0;
unsigned int var_16 = 3429590743U;
short var_17 = (short)-27958;
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
