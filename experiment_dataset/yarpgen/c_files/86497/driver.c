#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5555860635963095772ULL;
short var_1 = (short)6025;
unsigned char var_2 = (unsigned char)83;
_Bool var_11 = (_Bool)1;
unsigned long long int var_13 = 8371342194272314926ULL;
short var_14 = (short)-27815;
signed char var_15 = (signed char)-83;
short var_16 = (short)-5630;
_Bool var_18 = (_Bool)1;
int zero = 0;
int var_19 = 1410625115;
unsigned long long int var_20 = 17259903840216377919ULL;
unsigned char var_21 = (unsigned char)186;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
