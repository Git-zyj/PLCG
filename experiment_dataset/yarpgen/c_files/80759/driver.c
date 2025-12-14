#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41316;
unsigned short var_4 = (unsigned short)11877;
int var_5 = -1085664681;
signed char var_8 = (signed char)41;
unsigned int var_11 = 1910441982U;
short var_14 = (short)-22784;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)0;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)43;
unsigned long long int var_21 = 3568083206248429287ULL;
unsigned long long int var_22 = 8173111955008093299ULL;
unsigned char var_23 = (unsigned char)57;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
