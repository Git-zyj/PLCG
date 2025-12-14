#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13237953864815228120ULL;
long long int var_1 = -5693776558978349254LL;
long long int var_4 = -464944948928148484LL;
signed char var_6 = (signed char)-18;
short var_11 = (short)-29024;
int var_12 = 1088199114;
int var_14 = 2061984335;
unsigned char var_16 = (unsigned char)76;
unsigned short var_17 = (unsigned short)13249;
int zero = 0;
unsigned long long int var_18 = 12450327492290582246ULL;
long long int var_19 = 320649514291937038LL;
long long int var_20 = -7980472827971086985LL;
void init() {
}

void checksum() {
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
