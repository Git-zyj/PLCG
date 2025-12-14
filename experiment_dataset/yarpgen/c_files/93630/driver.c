#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3737017176U;
short var_2 = (short)-7505;
unsigned int var_5 = 750191121U;
unsigned int var_10 = 1321535384U;
int zero = 0;
unsigned long long int var_12 = 18122567015397248438ULL;
int var_13 = 220305134;
void init() {
}

void checksum() {
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
