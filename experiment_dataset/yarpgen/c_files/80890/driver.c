#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)94;
int var_9 = 744648483;
unsigned long long int var_11 = 17667701947403094552ULL;
short var_13 = (short)-24580;
unsigned long long int var_14 = 7658133310510423228ULL;
unsigned short var_16 = (unsigned short)33322;
int zero = 0;
int var_17 = -2052416966;
unsigned long long int var_18 = 16709641838497908837ULL;
void init() {
}

void checksum() {
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
