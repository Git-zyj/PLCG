#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)154;
short var_4 = (short)-446;
unsigned long long int var_5 = 3252662806627748491ULL;
short var_6 = (short)11401;
unsigned long long int var_12 = 17927177404810500242ULL;
int var_14 = 629909074;
int zero = 0;
short var_16 = (short)-2291;
unsigned long long int var_17 = 10633261588782893659ULL;
short var_18 = (short)18015;
unsigned int var_19 = 2641975331U;
unsigned long long int var_20 = 13993615239274822974ULL;
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
