#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)51202;
unsigned int var_7 = 2993295444U;
short var_13 = (short)31776;
int zero = 0;
unsigned long long int var_15 = 3360199747486181750ULL;
int var_16 = 1183924509;
short var_17 = (short)-18443;
void init() {
}

void checksum() {
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
