#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)185;
_Bool var_2 = (_Bool)0;
unsigned char var_10 = (unsigned char)14;
unsigned char var_13 = (unsigned char)26;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 3415971181U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
