#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2267954058575743112ULL;
short var_2 = (short)-27851;
unsigned long long int var_3 = 6828019601006120936ULL;
short var_4 = (short)-12743;
unsigned long long int var_5 = 6850553229420777840ULL;
_Bool var_7 = (_Bool)1;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 1123462530U;
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
