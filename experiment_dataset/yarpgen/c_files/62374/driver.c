#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 3867211951924755173ULL;
signed char var_8 = (signed char)49;
unsigned char var_11 = (unsigned char)162;
int zero = 0;
unsigned long long int var_16 = 16993772381723747206ULL;
unsigned char var_17 = (unsigned char)60;
void init() {
}

void checksum() {
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
