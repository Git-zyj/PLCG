#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3446683218U;
short var_4 = (short)12857;
int var_9 = 1097067256;
short var_10 = (short)-3908;
unsigned int var_12 = 2336198087U;
short var_13 = (short)-24802;
int zero = 0;
unsigned char var_16 = (unsigned char)11;
unsigned char var_17 = (unsigned char)190;
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
