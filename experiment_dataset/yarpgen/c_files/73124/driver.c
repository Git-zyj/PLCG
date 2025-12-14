#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)55231;
long long int var_4 = -5296385028128355092LL;
long long int var_8 = -2833231843321328383LL;
int zero = 0;
long long int var_11 = -5621903805325757931LL;
unsigned int var_12 = 2549607804U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
