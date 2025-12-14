#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)52;
int var_5 = 694044597;
signed char var_7 = (signed char)-75;
unsigned short var_8 = (unsigned short)46055;
unsigned short var_12 = (unsigned short)43073;
int zero = 0;
int var_17 = -1950948914;
unsigned short var_18 = (unsigned short)12576;
long long int var_19 = 3187953695813171147LL;
short var_20 = (short)-23831;
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
