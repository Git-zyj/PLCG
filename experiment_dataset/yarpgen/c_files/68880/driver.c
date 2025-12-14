#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-32004;
unsigned long long int var_2 = 8661211092338823339ULL;
long long int var_4 = 2530390660727809942LL;
signed char var_5 = (signed char)93;
unsigned int var_6 = 1921541924U;
unsigned long long int var_8 = 1003116793268614814ULL;
unsigned long long int var_10 = 6117390129387366992ULL;
unsigned long long int var_17 = 12757942389467678437ULL;
int zero = 0;
int var_20 = -1323038582;
unsigned short var_21 = (unsigned short)55645;
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
