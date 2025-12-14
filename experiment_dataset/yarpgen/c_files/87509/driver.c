#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)10278;
unsigned long long int var_2 = 6283037861293086287ULL;
unsigned long long int var_3 = 10272106551875160506ULL;
unsigned long long int var_5 = 16678008749053414555ULL;
long long int var_6 = 7276995503147558995LL;
unsigned int var_8 = 272382963U;
long long int var_11 = 3614377429009836959LL;
short var_14 = (short)-17834;
signed char var_15 = (signed char)26;
int zero = 0;
unsigned short var_17 = (unsigned short)15420;
short var_18 = (short)31648;
signed char var_19 = (signed char)-94;
unsigned int var_20 = 1041400855U;
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
