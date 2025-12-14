#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27497;
unsigned short var_2 = (unsigned short)57793;
short var_4 = (short)15335;
unsigned short var_9 = (unsigned short)56121;
int zero = 0;
int var_10 = 1615764369;
unsigned int var_11 = 3055306149U;
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
