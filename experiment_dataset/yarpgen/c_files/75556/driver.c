#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1258593567005139291ULL;
unsigned int var_2 = 2939949170U;
unsigned int var_4 = 126634079U;
int var_10 = 408935390;
int var_11 = -1667343876;
int zero = 0;
long long int var_12 = 4022517093502418173LL;
short var_13 = (short)11762;
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
