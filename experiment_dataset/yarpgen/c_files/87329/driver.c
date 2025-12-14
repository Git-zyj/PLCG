#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1720707399U;
short var_4 = (short)28989;
unsigned long long int var_6 = 15433693380009783797ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)13232;
int var_14 = -1012478052;
void init() {
}

void checksum() {
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
