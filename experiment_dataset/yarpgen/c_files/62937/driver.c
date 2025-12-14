#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11072;
unsigned char var_2 = (unsigned char)88;
unsigned long long int var_3 = 17317491926394689112ULL;
int zero = 0;
short var_16 = (short)-7059;
long long int var_17 = 5690096208433339418LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
