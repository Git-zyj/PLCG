#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3171719895U;
short var_1 = (short)4774;
unsigned int var_2 = 57971131U;
short var_5 = (short)-30662;
signed char var_7 = (signed char)95;
signed char var_8 = (signed char)-101;
unsigned char var_9 = (unsigned char)114;
int zero = 0;
unsigned char var_10 = (unsigned char)124;
unsigned int var_11 = 4156482655U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
