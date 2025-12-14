#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 584772617;
long long int var_2 = 7947759220286003484LL;
long long int var_3 = -2289518747894607804LL;
signed char var_4 = (signed char)108;
signed char var_10 = (signed char)62;
int var_15 = -672230882;
unsigned long long int var_16 = 8124105805462370022ULL;
int zero = 0;
unsigned long long int var_17 = 13299996465476803732ULL;
signed char var_18 = (signed char)72;
unsigned short var_19 = (unsigned short)48522;
int var_20 = -2044750456;
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
