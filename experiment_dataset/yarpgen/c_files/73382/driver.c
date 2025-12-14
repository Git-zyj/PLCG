#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)56790;
unsigned long long int var_2 = 8296864047826746989ULL;
signed char var_3 = (signed char)51;
int zero = 0;
short var_17 = (short)-10624;
unsigned long long int var_18 = 4843803940056577388ULL;
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
