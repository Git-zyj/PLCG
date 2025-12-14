#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)9269;
unsigned int var_4 = 4243786749U;
unsigned char var_11 = (unsigned char)161;
int zero = 0;
unsigned char var_13 = (unsigned char)240;
short var_14 = (short)11138;
unsigned short var_15 = (unsigned short)65381;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
