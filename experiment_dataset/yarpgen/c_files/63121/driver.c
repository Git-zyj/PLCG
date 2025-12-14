#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)65511;
unsigned int var_2 = 4243372988U;
unsigned int var_3 = 236990794U;
short var_5 = (short)27443;
int zero = 0;
unsigned int var_11 = 2466869139U;
unsigned int var_12 = 2641275236U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
