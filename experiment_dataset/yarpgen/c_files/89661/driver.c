#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)63;
unsigned short var_10 = (unsigned short)14810;
int zero = 0;
long long int var_17 = -926087126918552127LL;
unsigned long long int var_18 = 8955353362811116550ULL;
long long int var_19 = 5994450749969746041LL;
int var_20 = -1376697683;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
