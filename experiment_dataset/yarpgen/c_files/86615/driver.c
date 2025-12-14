#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3320226754896985444ULL;
unsigned short var_2 = (unsigned short)5176;
int var_3 = -880537786;
short var_4 = (short)-10507;
long long int var_8 = -4243720600222136211LL;
signed char var_10 = (signed char)95;
long long int var_12 = -3806085926742540957LL;
long long int var_14 = 1678935226454990727LL;
int var_16 = 483754236;
int zero = 0;
unsigned char var_18 = (unsigned char)170;
unsigned short var_19 = (unsigned short)1637;
long long int var_20 = -776193567863373988LL;
void init() {
}

void checksum() {
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
