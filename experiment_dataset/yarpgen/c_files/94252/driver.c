#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-4253;
_Bool var_3 = (_Bool)1;
short var_5 = (short)29270;
long long int var_8 = 7108390079722019204LL;
signed char var_10 = (signed char)37;
short var_12 = (short)-23210;
long long int var_13 = 5622695573500855613LL;
signed char var_15 = (signed char)-87;
long long int var_16 = -3491360270712611371LL;
int zero = 0;
signed char var_17 = (signed char)-45;
unsigned int var_18 = 2049356116U;
unsigned long long int var_19 = 5225880127041462770ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
