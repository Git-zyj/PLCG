#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)63;
signed char var_4 = (signed char)-7;
signed char var_5 = (signed char)36;
unsigned short var_8 = (unsigned short)53841;
unsigned int var_9 = 3264922144U;
int zero = 0;
unsigned char var_10 = (unsigned char)106;
signed char var_11 = (signed char)127;
short var_12 = (short)-14401;
signed char var_13 = (signed char)-14;
unsigned char var_14 = (unsigned char)80;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
