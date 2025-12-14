#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)53221;
int var_2 = -1379499388;
short var_5 = (short)-1608;
unsigned short var_7 = (unsigned short)53856;
signed char var_15 = (signed char)10;
signed char var_16 = (signed char)-22;
int zero = 0;
unsigned char var_18 = (unsigned char)188;
int var_19 = -109367040;
signed char var_20 = (signed char)-17;
short var_21 = (short)-627;
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
