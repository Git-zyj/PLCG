#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -189914709;
int var_6 = -1154303216;
int var_7 = 1347237546;
int var_8 = 1583433708;
int var_9 = -915494695;
int var_12 = -1598814659;
int zero = 0;
int var_14 = -1106800849;
int var_15 = -996181130;
int var_16 = -459141384;
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
