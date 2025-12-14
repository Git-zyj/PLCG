#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 3577174349436880056ULL;
short var_4 = (short)-20804;
unsigned long long int var_16 = 13755578602058471391ULL;
int zero = 0;
short var_20 = (short)-19578;
unsigned short var_21 = (unsigned short)11297;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
