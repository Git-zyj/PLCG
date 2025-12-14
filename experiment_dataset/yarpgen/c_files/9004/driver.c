#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)30;
unsigned long long int var_4 = 9982881767947209425ULL;
unsigned short var_8 = (unsigned short)29756;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned int var_15 = 4007881942U;
short var_16 = (short)26768;
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
