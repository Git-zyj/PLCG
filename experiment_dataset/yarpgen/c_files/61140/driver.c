#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10891541952098964960ULL;
unsigned long long int var_7 = 2900795800151497698ULL;
short var_9 = (short)-23899;
unsigned long long int var_10 = 6127500027455167028ULL;
unsigned long long int var_11 = 8249067997988403901ULL;
_Bool var_15 = (_Bool)1;
int zero = 0;
long long int var_16 = 1265007068524512090LL;
unsigned long long int var_17 = 9253867233740766842ULL;
long long int var_18 = -8308325172942288811LL;
int var_19 = -325838633;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
