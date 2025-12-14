#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)17;
unsigned int var_1 = 3852627486U;
unsigned long long int var_2 = 15246775972233103264ULL;
unsigned short var_3 = (unsigned short)58604;
short var_4 = (short)-9484;
unsigned char var_8 = (unsigned char)203;
_Bool var_10 = (_Bool)1;
unsigned long long int var_12 = 10978402244920940782ULL;
unsigned short var_13 = (unsigned short)35754;
unsigned char var_14 = (unsigned char)26;
unsigned char var_15 = (unsigned char)147;
unsigned char var_16 = (unsigned char)254;
int zero = 0;
unsigned int var_17 = 1019843399U;
long long int var_18 = -85080778571299835LL;
unsigned short var_19 = (unsigned short)6458;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
