#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -3434772956121866451LL;
unsigned char var_4 = (unsigned char)81;
signed char var_6 = (signed char)24;
_Bool var_7 = (_Bool)1;
unsigned long long int var_9 = 4519542925652288409ULL;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-17672;
int zero = 0;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-9760;
unsigned char var_15 = (unsigned char)24;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
