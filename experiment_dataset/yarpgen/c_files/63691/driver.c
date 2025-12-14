#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)250;
signed char var_7 = (signed char)98;
unsigned long long int var_9 = 16174345478872452183ULL;
unsigned long long int var_10 = 5778673563090371760ULL;
int zero = 0;
int var_16 = 1250039800;
signed char var_17 = (signed char)73;
unsigned int var_18 = 677457278U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
