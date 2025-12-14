#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1736292002;
unsigned short var_1 = (unsigned short)29692;
unsigned short var_2 = (unsigned short)19412;
unsigned short var_4 = (unsigned short)2259;
int var_7 = 792456367;
_Bool var_8 = (_Bool)0;
short var_9 = (short)-14134;
int var_10 = -318566840;
int var_11 = 1216340755;
unsigned long long int var_12 = 575304755942601166ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)49901;
unsigned short var_14 = (unsigned short)14829;
unsigned short var_15 = (unsigned short)3905;
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
