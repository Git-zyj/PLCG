#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 1053862557;
_Bool var_8 = (_Bool)1;
int var_10 = 1441445639;
unsigned int var_13 = 3874589097U;
long long int var_15 = 1938568817986425302LL;
unsigned char var_18 = (unsigned char)27;
int zero = 0;
unsigned int var_19 = 1627123935U;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
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
