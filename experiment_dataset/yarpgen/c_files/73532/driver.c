#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)34513;
int var_2 = -1446593281;
unsigned int var_3 = 1947092848U;
unsigned short var_7 = (unsigned short)58067;
int zero = 0;
unsigned short var_12 = (unsigned short)47324;
signed char var_13 = (signed char)5;
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
