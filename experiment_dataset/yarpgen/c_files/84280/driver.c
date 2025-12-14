#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45833;
unsigned int var_6 = 1559382666U;
int var_9 = -1453572006;
int zero = 0;
unsigned int var_10 = 2977660798U;
short var_11 = (short)3671;
short var_12 = (short)17879;
unsigned char var_13 = (unsigned char)46;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
