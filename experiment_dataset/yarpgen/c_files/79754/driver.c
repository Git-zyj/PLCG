#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7274347648161277304ULL;
unsigned char var_3 = (unsigned char)211;
_Bool var_4 = (_Bool)0;
unsigned char var_7 = (unsigned char)86;
short var_10 = (short)15240;
int var_11 = 1260695557;
int var_12 = 415611422;
signed char var_13 = (signed char)-16;
signed char var_14 = (signed char)120;
int zero = 0;
unsigned int var_15 = 1829210493U;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)52653;
unsigned short var_18 = (unsigned short)25960;
long long int var_19 = 8393439098196504928LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
