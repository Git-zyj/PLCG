#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)3;
unsigned char var_1 = (unsigned char)132;
unsigned long long int var_2 = 16795966337834102612ULL;
unsigned long long int var_3 = 8903088967926538650ULL;
int var_4 = -1811405993;
int var_5 = -1980319454;
short var_6 = (short)-2070;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 7008019888162560612ULL;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned short var_10 = (unsigned short)40862;
short var_11 = (short)-29486;
signed char var_12 = (signed char)-51;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
