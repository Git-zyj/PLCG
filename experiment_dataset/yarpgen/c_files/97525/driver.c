#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6867534533748786100LL;
unsigned short var_1 = (unsigned short)52396;
int var_2 = -154463803;
unsigned long long int var_3 = 13854640782731524635ULL;
unsigned short var_4 = (unsigned short)45752;
unsigned char var_5 = (unsigned char)189;
int var_7 = -1445092653;
short var_8 = (short)26782;
signed char var_9 = (signed char)-77;
unsigned long long int var_10 = 7176927577296601749ULL;
short var_11 = (short)-3443;
unsigned long long int var_12 = 4219324287826398815ULL;
unsigned long long int var_13 = 3002890880843634452ULL;
unsigned char var_14 = (unsigned char)100;
unsigned long long int var_16 = 10901478140421241110ULL;
int zero = 0;
short var_17 = (short)-27541;
short var_18 = (short)-18001;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
