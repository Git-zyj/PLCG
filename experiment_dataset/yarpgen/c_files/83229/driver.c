#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29626;
short var_1 = (short)16999;
signed char var_5 = (signed char)16;
signed char var_9 = (signed char)-43;
unsigned char var_15 = (unsigned char)98;
int zero = 0;
unsigned short var_16 = (unsigned short)59275;
unsigned short var_17 = (unsigned short)26516;
unsigned short var_18 = (unsigned short)51380;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
