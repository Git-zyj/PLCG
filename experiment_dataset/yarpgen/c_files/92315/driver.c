#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -550048086;
long long int var_3 = 8457969412479323054LL;
int var_6 = -1952725319;
unsigned long long int var_7 = 11727674639530504781ULL;
unsigned short var_11 = (unsigned short)14417;
short var_12 = (short)-26248;
int zero = 0;
unsigned int var_14 = 470891760U;
unsigned int var_15 = 2170150831U;
unsigned short var_16 = (unsigned short)32405;
int var_17 = -363842939;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
