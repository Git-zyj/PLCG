#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-10837;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)197;
long long int var_10 = -2460992189923844575LL;
int zero = 0;
unsigned char var_13 = (unsigned char)117;
short var_14 = (short)21359;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
