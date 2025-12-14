#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)76;
unsigned int var_2 = 948646701U;
signed char var_3 = (signed char)-74;
unsigned int var_5 = 2350969257U;
unsigned short var_6 = (unsigned short)5633;
unsigned short var_8 = (unsigned short)11740;
unsigned char var_9 = (unsigned char)254;
unsigned short var_16 = (unsigned short)30512;
int zero = 0;
signed char var_17 = (signed char)123;
unsigned long long int var_18 = 6014412058117378898ULL;
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
