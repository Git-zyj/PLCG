#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 17726916412192378292ULL;
unsigned long long int var_6 = 8992292810430024255ULL;
short var_7 = (short)9234;
unsigned long long int var_9 = 7758176563643766886ULL;
int zero = 0;
unsigned int var_10 = 1737114659U;
unsigned short var_11 = (unsigned short)17062;
int var_12 = -584689289;
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
