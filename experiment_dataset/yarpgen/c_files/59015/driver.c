#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)103;
unsigned char var_11 = (unsigned char)182;
short var_12 = (short)18595;
int zero = 0;
signed char var_17 = (signed char)100;
short var_18 = (short)-27128;
unsigned long long int var_19 = 3469276184794394964ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
