#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24537;
unsigned long long int var_1 = 8843145369016785074ULL;
unsigned short var_2 = (unsigned short)17236;
int var_3 = -1263842394;
long long int var_5 = -5249936369611111267LL;
unsigned int var_7 = 1758075420U;
unsigned int var_8 = 959160141U;
int var_9 = 802945846;
int zero = 0;
int var_11 = -1958948578;
signed char var_12 = (signed char)117;
unsigned char var_13 = (unsigned char)20;
int var_14 = 2137756496;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
