#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1857603193;
short var_2 = (short)21830;
unsigned int var_5 = 4042680758U;
unsigned long long int var_7 = 4892012395208388664ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)27451;
unsigned short var_11 = (unsigned short)38713;
unsigned char var_12 = (unsigned char)239;
int var_13 = -1154349664;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
