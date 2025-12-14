#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3126;
unsigned char var_2 = (unsigned char)119;
unsigned char var_5 = (unsigned char)118;
unsigned short var_8 = (unsigned short)61089;
unsigned char var_11 = (unsigned char)183;
int var_14 = -134608554;
signed char var_16 = (signed char)115;
unsigned char var_17 = (unsigned char)122;
int zero = 0;
unsigned char var_18 = (unsigned char)196;
int var_19 = 562690258;
signed char var_20 = (signed char)-54;
unsigned short var_21 = (unsigned short)37364;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
