#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)17292;
_Bool var_2 = (_Bool)1;
int var_4 = 1535195952;
int var_6 = -13174620;
unsigned char var_7 = (unsigned char)124;
long long int var_10 = 5005697332893866525LL;
signed char var_13 = (signed char)-124;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned long long int var_15 = 10060877914259537501ULL;
int var_16 = -853504739;
int var_17 = 465633544;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
