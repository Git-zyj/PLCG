#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3454715289U;
unsigned int var_1 = 898606883U;
int var_2 = -1796093368;
int var_4 = -1574588726;
int var_11 = 1317825371;
int var_12 = 432041761;
unsigned int var_15 = 2482026327U;
int zero = 0;
int var_17 = -1797951217;
int var_18 = -239715962;
unsigned int var_19 = 1338764500U;
int var_20 = -1385855470;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
