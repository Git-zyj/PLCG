#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5404176163248339326LL;
unsigned int var_2 = 704353565U;
unsigned long long int var_3 = 976129051182675666ULL;
unsigned char var_5 = (unsigned char)12;
unsigned char var_6 = (unsigned char)43;
unsigned short var_7 = (unsigned short)2063;
int var_8 = 1711954058;
short var_10 = (short)16026;
unsigned long long int var_15 = 8918814877057574851ULL;
unsigned char var_16 = (unsigned char)49;
long long int var_17 = -2136138787935695555LL;
int zero = 0;
short var_20 = (short)-29661;
unsigned int var_21 = 551143879U;
unsigned char var_22 = (unsigned char)26;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
