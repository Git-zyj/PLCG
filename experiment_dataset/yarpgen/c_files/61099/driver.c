#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7802585088822204681ULL;
short var_3 = (short)-26368;
short var_4 = (short)-2153;
int var_6 = -1447780597;
long long int var_13 = -8478066467149192805LL;
int zero = 0;
unsigned short var_14 = (unsigned short)42432;
short var_15 = (short)-1987;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
