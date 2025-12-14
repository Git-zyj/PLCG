#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)146;
int var_3 = 1587240285;
unsigned short var_4 = (unsigned short)38411;
unsigned short var_6 = (unsigned short)50782;
int var_7 = 2022248471;
int var_8 = 1871470411;
short var_11 = (short)-2674;
short var_12 = (short)8386;
unsigned short var_13 = (unsigned short)3035;
short var_14 = (short)5410;
unsigned char var_16 = (unsigned char)142;
int zero = 0;
long long int var_18 = 1798207063512931028LL;
unsigned short var_19 = (unsigned short)61025;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
