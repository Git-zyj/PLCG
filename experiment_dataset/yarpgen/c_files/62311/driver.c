#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-26688;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)7;
unsigned short var_5 = (unsigned short)20176;
unsigned char var_6 = (unsigned char)204;
long long int var_7 = 6160752011209373016LL;
signed char var_12 = (signed char)-107;
signed char var_14 = (signed char)56;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned long long int var_16 = 7214458472456595872ULL;
long long int var_17 = -7314879097153461960LL;
unsigned int var_18 = 1620569451U;
void init() {
}

void checksum() {
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
