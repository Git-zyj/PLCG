#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22934;
int var_1 = 1365849478;
long long int var_2 = -5987213916550817762LL;
unsigned char var_5 = (unsigned char)68;
int var_6 = -215801500;
int var_7 = -1724727054;
unsigned char var_9 = (unsigned char)118;
long long int var_10 = -4347726158010151057LL;
int zero = 0;
unsigned char var_13 = (unsigned char)130;
short var_14 = (short)25416;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
