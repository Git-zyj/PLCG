#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)20;
signed char var_8 = (signed char)-83;
long long int var_10 = 631496364074306009LL;
unsigned char var_13 = (unsigned char)17;
int zero = 0;
long long int var_16 = 6996708514953641631LL;
int var_17 = 2013616912;
unsigned char var_18 = (unsigned char)107;
long long int var_19 = -5334308748646248141LL;
short var_20 = (short)-30546;
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
