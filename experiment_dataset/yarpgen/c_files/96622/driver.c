#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)11430;
int var_9 = 1294422765;
short var_12 = (short)25575;
unsigned long long int var_17 = 195156721619816424ULL;
int zero = 0;
unsigned long long int var_19 = 3172596173235460146ULL;
unsigned short var_20 = (unsigned short)58997;
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
