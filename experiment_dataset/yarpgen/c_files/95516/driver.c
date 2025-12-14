#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)171;
unsigned int var_1 = 2341930343U;
unsigned int var_3 = 453190915U;
unsigned int var_4 = 483373274U;
unsigned int var_10 = 195150595U;
unsigned char var_11 = (unsigned char)143;
int var_12 = 1248077601;
short var_13 = (short)-10012;
int zero = 0;
unsigned int var_14 = 1729162539U;
signed char var_15 = (signed char)-118;
unsigned long long int var_16 = 28230604051819537ULL;
int var_17 = -185985540;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
