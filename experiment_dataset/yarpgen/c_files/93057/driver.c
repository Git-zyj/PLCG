#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)9;
signed char var_6 = (signed char)-68;
unsigned short var_8 = (unsigned short)45890;
short var_10 = (short)-30866;
_Bool var_13 = (_Bool)1;
int var_15 = -1280107742;
int zero = 0;
int var_18 = 1566275524;
short var_19 = (short)32030;
int var_20 = 119717172;
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
