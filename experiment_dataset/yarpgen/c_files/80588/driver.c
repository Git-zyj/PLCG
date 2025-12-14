#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)57511;
unsigned long long int var_5 = 2101505994822386072ULL;
unsigned long long int var_6 = 5415401695966230711ULL;
unsigned long long int var_8 = 3608733387928390421ULL;
unsigned char var_10 = (unsigned char)212;
unsigned long long int var_11 = 14439198319342208105ULL;
long long int var_12 = -4667933618312805252LL;
signed char var_14 = (signed char)-53;
unsigned short var_15 = (unsigned short)61946;
short var_17 = (short)4;
int zero = 0;
unsigned short var_18 = (unsigned short)9912;
int var_19 = 952044963;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
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
