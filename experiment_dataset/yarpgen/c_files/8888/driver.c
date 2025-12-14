#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 287958486U;
int var_5 = -1824899540;
unsigned long long int var_6 = 9709708032584055648ULL;
unsigned int var_13 = 2698469747U;
int zero = 0;
unsigned short var_14 = (unsigned short)13582;
unsigned int var_15 = 3283008058U;
int var_16 = -492016885;
int var_17 = -1776446532;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
