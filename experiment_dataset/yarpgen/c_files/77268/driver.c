#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1341541482;
int var_1 = -1431169804;
int var_2 = 769294531;
int var_3 = 1006149233;
int var_4 = -56917744;
int var_5 = -1889233826;
int var_6 = 1191097944;
int var_7 = -312276106;
int var_9 = 1355673342;
int var_10 = -1743238593;
int var_12 = -1009524048;
int zero = 0;
int var_13 = 966522201;
int var_14 = 7140887;
int var_15 = 13050814;
int var_16 = -1620203519;
int var_17 = 1262203573;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
