#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2062552605;
int var_1 = 1256308361;
int var_2 = -1147674664;
int var_4 = -694144450;
int var_6 = -638350498;
int zero = 0;
int var_13 = 1958158182;
int var_14 = -521839983;
int var_15 = 1194378670;
int var_16 = -668645253;
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
