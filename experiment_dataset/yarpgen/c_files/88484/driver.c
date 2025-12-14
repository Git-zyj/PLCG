#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3741578218U;
unsigned char var_5 = (unsigned char)111;
int var_9 = -282200732;
unsigned int var_10 = 2127482970U;
long long int var_14 = -3164831016689143075LL;
unsigned char var_15 = (unsigned char)167;
int zero = 0;
unsigned long long int var_18 = 14473964560935800717ULL;
int var_19 = 490137370;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
