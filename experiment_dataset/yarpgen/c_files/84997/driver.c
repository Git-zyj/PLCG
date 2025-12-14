#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-15739;
long long int var_2 = 802900005842348025LL;
short var_3 = (short)1767;
long long int var_5 = 4449424473334840855LL;
int zero = 0;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-27903;
unsigned int var_13 = 3603185669U;
unsigned short var_14 = (unsigned short)26058;
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
