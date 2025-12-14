#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -207832096;
int var_1 = -96047522;
int var_2 = -1788662678;
int var_3 = -1217748958;
int var_4 = -728800720;
int var_5 = 1327796688;
int var_8 = 1556171183;
int var_10 = 964486466;
int zero = 0;
int var_13 = -1471827382;
int var_14 = -813411294;
void init() {
}

void checksum() {
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
