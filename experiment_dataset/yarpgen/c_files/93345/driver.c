#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)31171;
unsigned char var_3 = (unsigned char)8;
int var_4 = -925845703;
long long int var_6 = -3587011494719679120LL;
long long int var_11 = -649232326111373964LL;
int zero = 0;
long long int var_17 = 5468921612653790175LL;
short var_18 = (short)-27135;
short var_19 = (short)12585;
short var_20 = (short)19080;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
