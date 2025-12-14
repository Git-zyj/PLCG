#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-122;
long long int var_3 = 2773041321114449367LL;
long long int var_4 = 4170402219755992570LL;
unsigned long long int var_6 = 413697962555712192ULL;
unsigned char var_7 = (unsigned char)28;
signed char var_8 = (signed char)79;
unsigned char var_12 = (unsigned char)137;
int zero = 0;
unsigned long long int var_14 = 13092658405617923403ULL;
short var_15 = (short)-9428;
unsigned int var_16 = 476410034U;
int var_17 = -1520023693;
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
