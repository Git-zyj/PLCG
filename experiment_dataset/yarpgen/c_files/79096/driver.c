#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-98;
int var_2 = 711175241;
long long int var_3 = 7473173825735834684LL;
int var_4 = -114344216;
unsigned short var_5 = (unsigned short)16829;
unsigned long long int var_6 = 7870143738806715840ULL;
_Bool var_8 = (_Bool)0;
unsigned char var_10 = (unsigned char)171;
int var_11 = -553112216;
long long int var_12 = -1158345475718700846LL;
unsigned long long int var_13 = 15791863884426233631ULL;
unsigned short var_15 = (unsigned short)3576;
unsigned char var_16 = (unsigned char)185;
short var_17 = (short)30036;
unsigned int var_18 = 3761625688U;
int zero = 0;
unsigned short var_20 = (unsigned short)31232;
unsigned char var_21 = (unsigned char)2;
unsigned char var_22 = (unsigned char)235;
long long int var_23 = 3139110210019977369LL;
signed char var_24 = (signed char)-6;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
