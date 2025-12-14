#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15456300278659826482ULL;
unsigned long long int var_1 = 9103923048249125037ULL;
unsigned short var_2 = (unsigned short)15135;
long long int var_4 = 8563055380533440734LL;
unsigned int var_5 = 915757127U;
long long int var_7 = -2330487100264480211LL;
unsigned int var_8 = 661448904U;
int var_9 = 548024488;
int zero = 0;
unsigned int var_10 = 2560098523U;
unsigned int var_11 = 563379232U;
unsigned int var_12 = 3118148921U;
unsigned int var_13 = 2609701889U;
unsigned short var_14 = (unsigned short)63015;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
