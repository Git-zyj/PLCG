#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)27542;
unsigned long long int var_6 = 2159947388931113907ULL;
int var_9 = -1272338834;
int zero = 0;
unsigned long long int var_11 = 15695866669738788367ULL;
long long int var_12 = -1377760465368762653LL;
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
