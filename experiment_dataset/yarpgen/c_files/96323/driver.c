#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1499148957U;
unsigned char var_5 = (unsigned char)25;
signed char var_6 = (signed char)84;
unsigned long long int var_7 = 17486525792174726797ULL;
signed char var_8 = (signed char)93;
int zero = 0;
short var_10 = (short)-4260;
unsigned short var_11 = (unsigned short)59041;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
