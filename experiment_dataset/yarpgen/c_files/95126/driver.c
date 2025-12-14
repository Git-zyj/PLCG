#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)14;
unsigned int var_5 = 2070845861U;
short var_9 = (short)-9507;
unsigned int var_11 = 2246994483U;
int zero = 0;
int var_12 = -154052346;
unsigned long long int var_13 = 12367055453792037541ULL;
unsigned long long int var_14 = 9494880772779925788ULL;
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
