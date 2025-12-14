#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-6895;
unsigned short var_6 = (unsigned short)39371;
long long int var_9 = -4585375579390451255LL;
int zero = 0;
short var_16 = (short)24349;
unsigned short var_17 = (unsigned short)54705;
void init() {
}

void checksum() {
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
