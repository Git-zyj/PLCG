#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)5517;
short var_8 = (short)-32;
long long int var_10 = -6421761624463893686LL;
signed char var_11 = (signed char)116;
short var_13 = (short)-22628;
unsigned short var_16 = (unsigned short)15563;
short var_17 = (short)6714;
int zero = 0;
unsigned char var_18 = (unsigned char)59;
unsigned short var_19 = (unsigned short)27282;
unsigned short var_20 = (unsigned short)50530;
long long int var_21 = 3857546935075583306LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
