#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4028764094U;
short var_3 = (short)29700;
unsigned long long int var_8 = 7958704701002590259ULL;
unsigned long long int var_12 = 15338022289841673574ULL;
int zero = 0;
unsigned int var_13 = 2817312239U;
unsigned long long int var_14 = 6786603789610267013ULL;
void init() {
}

void checksum() {
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
