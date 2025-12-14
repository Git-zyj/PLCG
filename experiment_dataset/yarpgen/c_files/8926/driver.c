#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)43166;
unsigned char var_8 = (unsigned char)52;
short var_12 = (short)-11801;
int zero = 0;
unsigned long long int var_13 = 150275790940749409ULL;
short var_14 = (short)30197;
unsigned short var_15 = (unsigned short)18924;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
