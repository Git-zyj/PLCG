#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)231;
unsigned char var_7 = (unsigned char)23;
signed char var_10 = (signed char)(-127 - 1);
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)16;
long long int var_14 = -453480971244032486LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
