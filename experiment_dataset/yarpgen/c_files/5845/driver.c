#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)162;
signed char var_1 = (signed char)-22;
unsigned long long int var_5 = 17059896046252338347ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)34855;
long long int var_12 = -5297939135898364038LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
