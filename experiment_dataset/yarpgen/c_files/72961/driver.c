#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12585228359702618630ULL;
signed char var_4 = (signed char)126;
unsigned short var_5 = (unsigned short)26860;
unsigned char var_8 = (unsigned char)11;
unsigned int var_10 = 1406680570U;
unsigned long long int var_12 = 6021170957346001437ULL;
unsigned int var_13 = 2588873616U;
long long int var_15 = -4498125579584919777LL;
unsigned char var_17 = (unsigned char)18;
int zero = 0;
unsigned char var_18 = (unsigned char)254;
short var_19 = (short)-25372;
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
