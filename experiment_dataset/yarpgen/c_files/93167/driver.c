#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)71;
short var_2 = (short)-27233;
long long int var_5 = 44206279439938322LL;
long long int var_6 = -5257365588561662790LL;
unsigned long long int var_11 = 5692171998476605406ULL;
int zero = 0;
short var_12 = (short)-25041;
signed char var_13 = (signed char)9;
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
