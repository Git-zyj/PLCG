#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)32706;
int var_4 = -608308381;
int var_6 = 858014182;
short var_9 = (short)9322;
unsigned int var_12 = 4034784192U;
short var_13 = (short)-12079;
int zero = 0;
int var_15 = -227946081;
unsigned char var_16 = (unsigned char)105;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
