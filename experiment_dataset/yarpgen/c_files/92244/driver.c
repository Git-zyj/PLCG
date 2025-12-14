#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5876971139436375093LL;
unsigned int var_7 = 2448625895U;
unsigned char var_8 = (unsigned char)247;
unsigned int var_17 = 3097994142U;
int zero = 0;
unsigned long long int var_20 = 11663932928485326943ULL;
unsigned int var_21 = 3480047459U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
