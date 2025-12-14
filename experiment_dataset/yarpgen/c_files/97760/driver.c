#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-3454;
unsigned long long int var_11 = 2693979612909221157ULL;
short var_15 = (short)10872;
int zero = 0;
unsigned short var_17 = (unsigned short)61222;
long long int var_18 = 1288569523920994572LL;
void init() {
}

void checksum() {
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
