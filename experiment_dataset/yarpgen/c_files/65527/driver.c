#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7324;
unsigned short var_4 = (unsigned short)55572;
unsigned char var_7 = (unsigned char)168;
int var_9 = 1604026700;
unsigned char var_10 = (unsigned char)28;
unsigned long long int var_11 = 17079718644600968673ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)245;
int var_13 = -1410834349;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
