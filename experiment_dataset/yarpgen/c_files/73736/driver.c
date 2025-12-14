#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6427;
unsigned int var_2 = 3518714919U;
unsigned int var_3 = 1649369336U;
unsigned short var_7 = (unsigned short)2191;
unsigned short var_8 = (unsigned short)57939;
unsigned int var_9 = 3826597701U;
int zero = 0;
unsigned short var_10 = (unsigned short)25889;
unsigned short var_11 = (unsigned short)13585;
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
