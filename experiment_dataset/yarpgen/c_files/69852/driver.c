#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3190258088U;
unsigned long long int var_4 = 6379671331506848566ULL;
unsigned long long int var_13 = 6381944518411384031ULL;
unsigned char var_18 = (unsigned char)82;
int zero = 0;
unsigned char var_20 = (unsigned char)237;
unsigned int var_21 = 2183627830U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
