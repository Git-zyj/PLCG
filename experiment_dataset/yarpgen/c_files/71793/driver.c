#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)4919;
int var_5 = -721189723;
unsigned long long int var_6 = 13343137898546768603ULL;
int var_7 = 110373799;
int zero = 0;
long long int var_15 = 9070934590838385926LL;
int var_16 = -137102243;
unsigned long long int var_17 = 52306165480732895ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
