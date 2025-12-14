#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)20;
unsigned int var_1 = 2801266743U;
int var_4 = -1491753300;
long long int var_8 = -2699836700316719638LL;
int zero = 0;
int var_16 = 1756568301;
int var_17 = -771928963;
unsigned short var_18 = (unsigned short)123;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
