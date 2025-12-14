#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)19;
long long int var_1 = 6623255637373537465LL;
_Bool var_2 = (_Bool)1;
short var_3 = (short)5186;
unsigned char var_4 = (unsigned char)87;
unsigned long long int var_9 = 14394348146291609559ULL;
long long int var_10 = -702336165846260663LL;
int var_11 = -1284630517;
unsigned int var_13 = 1134673319U;
int zero = 0;
unsigned char var_14 = (unsigned char)199;
long long int var_15 = 1648839135119226141LL;
unsigned short var_16 = (unsigned short)65110;
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
