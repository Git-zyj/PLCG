#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4914642202897537882LL;
unsigned char var_2 = (unsigned char)103;
unsigned int var_5 = 589467860U;
short var_6 = (short)-30828;
unsigned char var_7 = (unsigned char)66;
unsigned long long int var_9 = 6811993720967677405ULL;
unsigned char var_10 = (unsigned char)18;
int zero = 0;
unsigned int var_14 = 3593441454U;
unsigned char var_15 = (unsigned char)55;
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
