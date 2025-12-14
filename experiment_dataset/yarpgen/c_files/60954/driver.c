#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)5002;
unsigned long long int var_6 = 9255013597415356883ULL;
unsigned long long int var_10 = 9472448188677077782ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)7926;
short var_14 = (short)-24510;
unsigned long long int var_15 = 11778451843861908541ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
