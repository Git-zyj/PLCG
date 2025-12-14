#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 967101676U;
int var_1 = 1262723493;
long long int var_2 = 1927614900822830467LL;
unsigned long long int var_4 = 6005219758652545045ULL;
unsigned short var_5 = (unsigned short)25310;
unsigned int var_7 = 3741050828U;
long long int var_8 = 8874424757705868415LL;
signed char var_9 = (signed char)120;
int var_10 = -575950567;
_Bool var_11 = (_Bool)0;
long long int var_13 = 1085722037974843386LL;
int zero = 0;
_Bool var_14 = (_Bool)1;
long long int var_15 = 3556908828898990486LL;
unsigned short var_16 = (unsigned short)16937;
signed char var_17 = (signed char)-98;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
