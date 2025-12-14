#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1680769364;
short var_4 = (short)28359;
short var_6 = (short)12230;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 14193015160679845232ULL;
unsigned short var_9 = (unsigned short)64058;
signed char var_11 = (signed char)-124;
unsigned char var_12 = (unsigned char)50;
unsigned char var_13 = (unsigned char)146;
int zero = 0;
unsigned long long int var_16 = 4700371057228938099ULL;
long long int var_17 = 4245967799276220157LL;
long long int var_18 = 8358534612599819037LL;
unsigned long long int var_19 = 9374153045288859514ULL;
unsigned short var_20 = (unsigned short)18228;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
