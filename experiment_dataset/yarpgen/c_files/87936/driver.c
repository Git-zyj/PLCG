#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1630762237697409583ULL;
unsigned short var_2 = (unsigned short)1146;
unsigned long long int var_5 = 16527479672198129668ULL;
long long int var_6 = 7243492035025598647LL;
unsigned int var_7 = 3798345398U;
int zero = 0;
long long int var_10 = 5786238036592038544LL;
unsigned long long int var_11 = 9081220544763131200ULL;
unsigned short var_12 = (unsigned short)54814;
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
