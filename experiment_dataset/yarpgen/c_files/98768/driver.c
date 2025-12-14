#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4671393744519578827ULL;
int var_4 = -1594276817;
unsigned char var_5 = (unsigned char)79;
unsigned short var_9 = (unsigned short)23060;
unsigned int var_12 = 447989287U;
int zero = 0;
unsigned short var_17 = (unsigned short)45409;
unsigned int var_18 = 211567689U;
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
