#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -159956262;
int var_8 = -1550035921;
int var_10 = -445264423;
int var_12 = 1863467483;
int zero = 0;
int var_13 = -302964803;
int var_14 = 917662232;
int var_15 = -1294772822;
int var_16 = 2011183821;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
