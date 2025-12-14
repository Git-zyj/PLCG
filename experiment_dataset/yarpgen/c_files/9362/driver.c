#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1717759121;
int var_2 = 1116938360;
int var_3 = -696741898;
int var_4 = 1395885991;
int var_6 = -1641761675;
int var_7 = 1602743210;
int var_8 = 1655470564;
int var_9 = 746230935;
int var_11 = 267643609;
int zero = 0;
int var_12 = -127853604;
int var_13 = -995048756;
int var_14 = -1763393561;
int var_15 = -161604938;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
