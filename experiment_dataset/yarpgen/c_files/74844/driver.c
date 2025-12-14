#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)116;
int var_8 = -696500308;
int var_13 = 547428850;
_Bool var_14 = (_Bool)1;
int zero = 0;
signed char var_16 = (signed char)6;
unsigned char var_17 = (unsigned char)209;
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
