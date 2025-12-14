#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1996704295450860135LL;
short var_2 = (short)30816;
short var_6 = (short)-32591;
int zero = 0;
long long int var_11 = -5466811391459724348LL;
int var_12 = -1446133958;
unsigned short var_13 = (unsigned short)18823;
unsigned char var_14 = (unsigned char)249;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
