#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5157601620339953534ULL;
unsigned long long int var_4 = 2991418916735171481ULL;
signed char var_5 = (signed char)-58;
unsigned long long int var_8 = 9745457050020448121ULL;
int var_10 = -1228190539;
unsigned int var_13 = 277288621U;
int var_14 = -1776201897;
unsigned char var_15 = (unsigned char)243;
int zero = 0;
short var_17 = (short)27220;
signed char var_18 = (signed char)-127;
int var_19 = 730227852;
unsigned int var_20 = 1672066761U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
