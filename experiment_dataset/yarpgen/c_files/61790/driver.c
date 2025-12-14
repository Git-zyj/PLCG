#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)52;
unsigned short var_1 = (unsigned short)60452;
unsigned long long int var_2 = 8100542655873447673ULL;
unsigned long long int var_5 = 12210299967497316863ULL;
_Bool var_6 = (_Bool)1;
int zero = 0;
short var_10 = (short)-11220;
int var_11 = -1950631500;
unsigned long long int var_12 = 13677701165667823749ULL;
unsigned short var_13 = (unsigned short)39786;
signed char var_14 = (signed char)34;
short var_15 = (short)-16734;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
