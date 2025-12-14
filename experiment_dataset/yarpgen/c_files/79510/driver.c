#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)230;
unsigned long long int var_2 = 17129090441941166777ULL;
long long int var_4 = 2623604419170218744LL;
long long int var_11 = 4535565259066850740LL;
long long int var_13 = 8445572493803881785LL;
int zero = 0;
short var_14 = (short)-19597;
unsigned char var_15 = (unsigned char)9;
long long int var_16 = 2553576228845548999LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
