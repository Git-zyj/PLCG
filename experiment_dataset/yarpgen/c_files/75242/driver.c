#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5358917316388028019ULL;
unsigned long long int var_1 = 15999460393585204161ULL;
int var_3 = -1058148307;
signed char var_4 = (signed char)16;
unsigned long long int var_5 = 5252600994021818394ULL;
int var_7 = -980921725;
unsigned long long int var_9 = 13252506146570578155ULL;
signed char var_12 = (signed char)-50;
int zero = 0;
short var_14 = (short)12264;
long long int var_15 = 1761253252876507232LL;
short var_16 = (short)2354;
int var_17 = 1593236627;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
