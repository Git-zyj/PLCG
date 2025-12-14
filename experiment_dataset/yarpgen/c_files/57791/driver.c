#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)56;
unsigned long long int var_2 = 11966969940873909794ULL;
signed char var_3 = (signed char)30;
_Bool var_4 = (_Bool)0;
unsigned long long int var_7 = 16046554040654352117ULL;
unsigned int var_8 = 2005039684U;
unsigned char var_9 = (unsigned char)99;
int var_10 = 1314500146;
int zero = 0;
unsigned short var_12 = (unsigned short)61766;
unsigned char var_13 = (unsigned char)41;
long long int var_14 = -7719373878893949463LL;
signed char var_15 = (signed char)92;
signed char var_16 = (signed char)45;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
