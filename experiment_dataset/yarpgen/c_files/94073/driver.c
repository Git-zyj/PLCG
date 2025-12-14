#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3786353263U;
unsigned char var_7 = (unsigned char)17;
unsigned long long int var_8 = 502524990137249163ULL;
short var_11 = (short)-30746;
unsigned int var_12 = 41791958U;
int zero = 0;
unsigned char var_13 = (unsigned char)50;
unsigned char var_14 = (unsigned char)162;
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
