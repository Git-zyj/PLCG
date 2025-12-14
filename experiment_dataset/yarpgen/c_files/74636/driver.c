#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)3451;
unsigned char var_11 = (unsigned char)133;
_Bool var_13 = (_Bool)0;
unsigned long long int var_15 = 8615273562966836754ULL;
int zero = 0;
int var_19 = -1005286562;
short var_20 = (short)29993;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
