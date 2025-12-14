#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 16528979432643702046ULL;
unsigned long long int var_9 = 14794000409146416889ULL;
unsigned char var_10 = (unsigned char)34;
unsigned char var_12 = (unsigned char)201;
unsigned long long int var_13 = 5576364810154916846ULL;
int zero = 0;
unsigned long long int var_14 = 5467200254665248867ULL;
unsigned char var_15 = (unsigned char)162;
unsigned long long int var_16 = 5051757556460151218ULL;
unsigned char var_17 = (unsigned char)112;
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
