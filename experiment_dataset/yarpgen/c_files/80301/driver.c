#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)93;
unsigned int var_9 = 3015491434U;
unsigned char var_10 = (unsigned char)70;
unsigned char var_11 = (unsigned char)106;
unsigned char var_14 = (unsigned char)129;
short var_15 = (short)-13585;
short var_17 = (short)2268;
int zero = 0;
unsigned long long int var_18 = 3731387278203774936ULL;
short var_19 = (short)-201;
signed char var_20 = (signed char)27;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
