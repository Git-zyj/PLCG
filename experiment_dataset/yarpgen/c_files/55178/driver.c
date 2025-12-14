#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-25901;
unsigned int var_3 = 3931201273U;
unsigned long long int var_5 = 7365642873448449932ULL;
int var_7 = -422080241;
short var_8 = (short)-23524;
int var_10 = -993764641;
unsigned long long int var_11 = 11859003546171135864ULL;
unsigned short var_14 = (unsigned short)37917;
unsigned int var_17 = 1914528740U;
int var_19 = -271757159;
int zero = 0;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-13548;
int var_22 = 1824190453;
unsigned char var_23 = (unsigned char)78;
long long int var_24 = 7004865772077184403LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
