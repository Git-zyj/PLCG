#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)14347;
unsigned long long int var_5 = 8969222071354067856ULL;
unsigned long long int var_7 = 2339834720817704220ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)13;
unsigned short var_11 = (unsigned short)45856;
unsigned short var_12 = (unsigned short)17083;
unsigned long long int var_13 = 1613473442974008139ULL;
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
