#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5669627986894665522LL;
unsigned char var_4 = (unsigned char)104;
unsigned short var_5 = (unsigned short)2859;
unsigned short var_9 = (unsigned short)11087;
int zero = 0;
unsigned int var_12 = 709409872U;
unsigned int var_13 = 4235915555U;
unsigned long long int var_14 = 10903297813714824756ULL;
unsigned int var_15 = 1016926166U;
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
