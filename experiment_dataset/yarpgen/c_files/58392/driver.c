#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)4265;
signed char var_2 = (signed char)121;
short var_5 = (short)-8285;
unsigned char var_10 = (unsigned char)250;
signed char var_11 = (signed char)27;
int zero = 0;
int var_14 = 136316162;
unsigned int var_15 = 1249789197U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
