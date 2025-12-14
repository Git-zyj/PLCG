#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-30753;
short var_7 = (short)-5371;
int var_8 = -964889462;
long long int var_12 = 4453983831631335246LL;
long long int var_13 = 4871581811176082429LL;
int var_15 = 1497413123;
int var_16 = -1381888498;
int zero = 0;
int var_17 = 634454014;
unsigned short var_18 = (unsigned short)52717;
short var_19 = (short)29643;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
