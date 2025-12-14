#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-2471;
short var_4 = (short)-206;
unsigned int var_14 = 2242008594U;
int zero = 0;
unsigned long long int var_16 = 1670670846104343958ULL;
long long int var_17 = 9005923159053399962LL;
unsigned int var_18 = 3332507830U;
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
