#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2071922938;
unsigned short var_6 = (unsigned short)30622;
unsigned int var_8 = 65750330U;
int var_9 = 1668417030;
int zero = 0;
int var_14 = -461594286;
unsigned long long int var_15 = 11989179301131576246ULL;
unsigned short var_16 = (unsigned short)43823;
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
