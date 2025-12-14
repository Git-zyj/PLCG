#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)223;
long long int var_3 = -4409701538031754293LL;
unsigned char var_8 = (unsigned char)225;
int zero = 0;
short var_10 = (short)5091;
unsigned int var_11 = 386449812U;
unsigned int var_12 = 1344637736U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
