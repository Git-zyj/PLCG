#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1538086162;
int var_2 = 1588295995;
int var_4 = -936399566;
int var_6 = 1503615817;
int var_7 = 432070274;
int var_8 = -641766296;
int zero = 0;
int var_10 = -1530685673;
int var_11 = 1062696565;
int var_12 = -731824818;
int var_13 = -702740731;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
