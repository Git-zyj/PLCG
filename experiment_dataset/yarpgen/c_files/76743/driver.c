#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16533;
unsigned long long int var_1 = 1213001805949189401ULL;
short var_2 = (short)-26882;
unsigned short var_4 = (unsigned short)53279;
short var_5 = (short)-542;
long long int var_6 = 4744069558689480161LL;
unsigned int var_8 = 252422656U;
long long int var_10 = -7185412033107288477LL;
unsigned int var_11 = 715469231U;
signed char var_12 = (signed char)-25;
unsigned int var_13 = 1834402165U;
signed char var_14 = (signed char)-75;
signed char var_15 = (signed char)124;
signed char var_16 = (signed char)-42;
int zero = 0;
unsigned char var_17 = (unsigned char)149;
short var_18 = (short)-22734;
long long int var_19 = -83868324118952057LL;
long long int var_20 = 7453658344837882980LL;
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
