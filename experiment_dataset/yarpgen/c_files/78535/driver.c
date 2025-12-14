#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)127;
_Bool var_3 = (_Bool)1;
unsigned long long int var_8 = 8224478795065084071ULL;
int var_9 = 1933141391;
unsigned short var_11 = (unsigned short)64700;
int zero = 0;
unsigned int var_12 = 479956312U;
unsigned char var_13 = (unsigned char)66;
int var_14 = -1405773793;
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
