#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)174;
unsigned int var_6 = 2639529078U;
_Bool var_11 = (_Bool)1;
short var_16 = (short)4681;
int zero = 0;
short var_17 = (short)8718;
unsigned int var_18 = 2103058599U;
void init() {
}

void checksum() {
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
