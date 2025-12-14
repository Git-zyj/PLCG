#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1991014722;
int var_2 = -521226592;
unsigned long long int var_5 = 13662128457838678201ULL;
int var_9 = 54922376;
int zero = 0;
unsigned int var_11 = 3424483514U;
unsigned char var_12 = (unsigned char)115;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
