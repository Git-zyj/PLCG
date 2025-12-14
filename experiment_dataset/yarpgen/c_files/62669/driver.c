#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)102;
signed char var_4 = (signed char)54;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)191;
_Bool var_12 = (_Bool)1;
int zero = 0;
int var_14 = -322926761;
unsigned char var_15 = (unsigned char)234;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
