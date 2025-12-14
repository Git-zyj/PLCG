#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)240;
_Bool var_10 = (_Bool)1;
signed char var_12 = (signed char)76;
int zero = 0;
unsigned long long int var_14 = 15584427686807175449ULL;
unsigned int var_15 = 902029908U;
unsigned short var_16 = (unsigned short)22147;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
