#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3545189041U;
unsigned short var_3 = (unsigned short)53456;
unsigned char var_7 = (unsigned char)236;
signed char var_9 = (signed char)-43;
short var_10 = (short)-290;
signed char var_11 = (signed char)-64;
short var_13 = (short)-13416;
unsigned int var_14 = 608988380U;
unsigned short var_17 = (unsigned short)26417;
unsigned short var_18 = (unsigned short)63755;
int zero = 0;
unsigned short var_19 = (unsigned short)436;
unsigned long long int var_20 = 13368244663407155697ULL;
void init() {
}

void checksum() {
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
