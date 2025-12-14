#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12499;
_Bool var_1 = (_Bool)0;
short var_2 = (short)-5107;
short var_3 = (short)14496;
long long int var_8 = 2621363217796063067LL;
long long int var_10 = 9169406333938103219LL;
short var_11 = (short)7194;
int zero = 0;
unsigned long long int var_13 = 12547259138778049371ULL;
short var_14 = (short)-15893;
long long int var_15 = 7936536823461724514LL;
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
