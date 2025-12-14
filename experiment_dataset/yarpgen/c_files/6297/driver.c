#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15785485345143908150ULL;
_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)2;
unsigned short var_4 = (unsigned short)40257;
unsigned long long int var_5 = 11385539226853549823ULL;
unsigned long long int var_6 = 4430882202741610821ULL;
unsigned short var_7 = (unsigned short)38821;
unsigned long long int var_8 = 15390858411607269217ULL;
short var_11 = (short)10282;
unsigned long long int var_12 = 2459943370660905127ULL;
unsigned short var_13 = (unsigned short)11415;
short var_14 = (short)-31413;
unsigned short var_15 = (unsigned short)15332;
int zero = 0;
short var_16 = (short)23713;
unsigned char var_17 = (unsigned char)41;
unsigned int var_18 = 3712699854U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
