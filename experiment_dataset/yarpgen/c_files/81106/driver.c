#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11872045309861523254ULL;
unsigned short var_2 = (unsigned short)17728;
unsigned short var_3 = (unsigned short)54344;
long long int var_5 = 5565325658330750324LL;
long long int var_7 = -2528608771395526300LL;
int var_9 = -1583258872;
int var_10 = -747869852;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 7974709066862831740ULL;
long long int var_14 = 1192213958755233126LL;
long long int var_15 = -6801478216072839482LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
