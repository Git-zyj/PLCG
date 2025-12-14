#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)88;
unsigned short var_2 = (unsigned short)3790;
long long int var_3 = -6603905328636034502LL;
unsigned int var_6 = 1973874845U;
long long int var_8 = 8466243646955216124LL;
int var_9 = 1122964091;
short var_11 = (short)7298;
int zero = 0;
signed char var_17 = (signed char)-76;
long long int var_18 = -2943133759386795051LL;
signed char var_19 = (signed char)85;
unsigned int var_20 = 2436647636U;
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
