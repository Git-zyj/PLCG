#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6730450711522222136LL;
int var_4 = -1716604060;
unsigned short var_9 = (unsigned short)49406;
int zero = 0;
signed char var_14 = (signed char)-65;
int var_15 = -703650787;
long long int var_16 = 5869267479535941449LL;
signed char var_17 = (signed char)52;
unsigned int var_18 = 4185993797U;
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
