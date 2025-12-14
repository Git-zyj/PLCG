#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8622131026450718682ULL;
long long int var_2 = 5627887703844331409LL;
unsigned long long int var_6 = 7039072059476278507ULL;
unsigned char var_10 = (unsigned char)109;
unsigned char var_12 = (unsigned char)27;
unsigned long long int var_15 = 6270936907217806121ULL;
int zero = 0;
short var_17 = (short)8514;
short var_18 = (short)-31316;
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
