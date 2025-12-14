#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-32334;
unsigned char var_9 = (unsigned char)124;
unsigned long long int var_11 = 7680628370865702453ULL;
short var_13 = (short)-23533;
unsigned long long int var_15 = 9947592383655505838ULL;
unsigned char var_16 = (unsigned char)89;
int zero = 0;
short var_17 = (short)1051;
unsigned char var_18 = (unsigned char)145;
void init() {
}

void checksum() {
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
