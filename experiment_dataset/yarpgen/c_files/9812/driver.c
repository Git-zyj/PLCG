#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18341708187163369843ULL;
unsigned char var_8 = (unsigned char)122;
signed char var_9 = (signed char)69;
unsigned char var_11 = (unsigned char)255;
int zero = 0;
unsigned char var_14 = (unsigned char)127;
unsigned long long int var_15 = 17964515168715184268ULL;
short var_16 = (short)-4285;
unsigned char var_17 = (unsigned char)96;
int var_18 = 711080451;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
