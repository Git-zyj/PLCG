#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 582507979;
short var_3 = (short)-19229;
unsigned long long int var_5 = 17840428694377010674ULL;
int zero = 0;
unsigned long long int var_10 = 623831791860050494ULL;
int var_11 = -989160141;
short var_12 = (short)-14236;
unsigned short var_13 = (unsigned short)21003;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
