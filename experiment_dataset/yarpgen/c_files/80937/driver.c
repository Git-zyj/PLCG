#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_3 = (short)-23100;
signed char var_5 = (signed char)121;
short var_7 = (short)-31838;
long long int var_8 = -3980144969426922638LL;
signed char var_10 = (signed char)18;
unsigned char var_11 = (unsigned char)136;
short var_12 = (short)-30245;
int zero = 0;
int var_15 = -1246782071;
signed char var_16 = (signed char)76;
_Bool var_17 = (_Bool)0;
short var_18 = (short)30427;
unsigned long long int var_19 = 2266006551867632887ULL;
long long int var_20 = 4045794103003472110LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
