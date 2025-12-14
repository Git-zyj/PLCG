#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1831159203U;
unsigned long long int var_5 = 15117851282071340590ULL;
long long int var_6 = 7991290672936749127LL;
int var_7 = -1390773732;
long long int var_10 = -1757788547758997686LL;
long long int var_11 = 7491075258390723493LL;
int zero = 0;
unsigned int var_13 = 2895982255U;
long long int var_14 = 97521344392386578LL;
void init() {
}

void checksum() {
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
