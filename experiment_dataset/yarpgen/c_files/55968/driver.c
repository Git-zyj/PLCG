#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-21720;
unsigned long long int var_1 = 14980561082428113466ULL;
long long int var_3 = 5349349787833701257LL;
short var_6 = (short)3329;
unsigned long long int var_7 = 15610587447973680012ULL;
unsigned char var_8 = (unsigned char)214;
int zero = 0;
unsigned long long int var_10 = 14867328637663623345ULL;
long long int var_11 = 6389491328275280267LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
