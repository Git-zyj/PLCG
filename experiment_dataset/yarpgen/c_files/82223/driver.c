#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6410676096286362275LL;
signed char var_3 = (signed char)75;
signed char var_4 = (signed char)-13;
unsigned char var_5 = (unsigned char)134;
unsigned int var_10 = 3712646458U;
long long int var_12 = 634714591303899400LL;
signed char var_13 = (signed char)-27;
int zero = 0;
unsigned int var_14 = 2460230476U;
unsigned int var_15 = 4219689264U;
unsigned short var_16 = (unsigned short)24825;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
