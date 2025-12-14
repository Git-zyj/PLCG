#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2076802130U;
unsigned short var_4 = (unsigned short)17289;
short var_6 = (short)-25336;
signed char var_7 = (signed char)-51;
signed char var_9 = (signed char)-33;
unsigned int var_10 = 2498865462U;
signed char var_11 = (signed char)16;
int zero = 0;
unsigned int var_13 = 112258991U;
unsigned char var_14 = (unsigned char)229;
short var_15 = (short)9993;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
