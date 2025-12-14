#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5133980182999556139ULL;
long long int var_3 = 6553954672317409384LL;
int var_6 = 297813670;
long long int var_10 = -785904493222908999LL;
int var_11 = 750204241;
unsigned long long int var_12 = 11285669269506534873ULL;
unsigned int var_14 = 1337008745U;
unsigned char var_17 = (unsigned char)77;
int zero = 0;
unsigned long long int var_20 = 8219732647906182778ULL;
unsigned char var_21 = (unsigned char)188;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
