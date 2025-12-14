#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5216046989064707435LL;
long long int var_2 = 6520414558673454900LL;
unsigned long long int var_5 = 15912172072099894817ULL;
unsigned long long int var_6 = 3543572842436013558ULL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_9 = 14479830933788708541ULL;
unsigned short var_10 = (unsigned short)41968;
int var_12 = -2057381576;
long long int var_15 = -6883166302658303222LL;
long long int var_16 = -5632536597976728935LL;
unsigned long long int var_17 = 2164699093021157715ULL;
int zero = 0;
long long int var_18 = 1488678661397938334LL;
long long int var_19 = 2558257858163806902LL;
unsigned char var_20 = (unsigned char)82;
short var_21 = (short)12623;
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
