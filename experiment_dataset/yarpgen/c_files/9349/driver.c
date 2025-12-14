#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)736;
unsigned char var_3 = (unsigned char)176;
unsigned long long int var_6 = 13803662178740673778ULL;
unsigned short var_7 = (unsigned short)3230;
unsigned char var_10 = (unsigned char)216;
long long int var_11 = -1508499573274874289LL;
signed char var_12 = (signed char)82;
signed char var_14 = (signed char)-30;
int zero = 0;
signed char var_15 = (signed char)9;
int var_16 = 1096142115;
unsigned int var_17 = 1418298258U;
short var_18 = (short)8897;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
