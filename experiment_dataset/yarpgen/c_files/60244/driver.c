#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 3677161185276321497ULL;
short var_5 = (short)-25084;
unsigned long long int var_6 = 7770253167251233742ULL;
int zero = 0;
short var_11 = (short)-6766;
unsigned short var_12 = (unsigned short)47678;
short var_13 = (short)-23904;
void init() {
}

void checksum() {
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
