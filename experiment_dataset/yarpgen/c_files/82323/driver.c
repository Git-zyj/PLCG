#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3308294643627431LL;
unsigned short var_2 = (unsigned short)52656;
signed char var_3 = (signed char)90;
signed char var_5 = (signed char)-22;
signed char var_9 = (signed char)-69;
signed char var_10 = (signed char)33;
short var_12 = (short)1367;
int zero = 0;
unsigned long long int var_14 = 15693993044227938201ULL;
long long int var_15 = 5334778963217841253LL;
short var_16 = (short)-25865;
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
