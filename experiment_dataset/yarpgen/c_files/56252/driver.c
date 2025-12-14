#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1758386585525289039LL;
unsigned short var_4 = (unsigned short)58872;
long long int var_7 = -7979920960705777046LL;
int var_8 = 588446226;
unsigned short var_12 = (unsigned short)36014;
int zero = 0;
unsigned long long int var_18 = 5484813035919581487ULL;
unsigned short var_19 = (unsigned short)53499;
unsigned int var_20 = 957861068U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
