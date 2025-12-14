#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23840;
signed char var_2 = (signed char)36;
long long int var_3 = 2236844973403508307LL;
long long int var_5 = -3358457423203748243LL;
long long int var_7 = -2000476900572126596LL;
long long int var_8 = -1801366671790279434LL;
unsigned char var_13 = (unsigned char)103;
int zero = 0;
long long int var_17 = -6239549280813105287LL;
unsigned short var_18 = (unsigned short)38155;
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
