#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3386415868U;
unsigned short var_7 = (unsigned short)54013;
unsigned char var_10 = (unsigned char)75;
int zero = 0;
signed char var_13 = (signed char)-61;
unsigned int var_14 = 2570763081U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
