#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60581;
unsigned short var_1 = (unsigned short)42162;
int var_2 = -1198835670;
unsigned long long int var_4 = 1406508661627129378ULL;
unsigned short var_10 = (unsigned short)8100;
unsigned int var_14 = 2656092508U;
int zero = 0;
unsigned short var_15 = (unsigned short)13940;
unsigned short var_16 = (unsigned short)61830;
void init() {
}

void checksum() {
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
