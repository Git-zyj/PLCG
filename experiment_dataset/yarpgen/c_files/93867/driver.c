#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1602344897;
unsigned long long int var_2 = 4206889871239654508ULL;
signed char var_3 = (signed char)-71;
unsigned long long int var_4 = 8131417522075459596ULL;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)0;
long long int var_11 = 1251819802244217501LL;
long long int var_12 = 1195374525889846071LL;
int zero = 0;
unsigned char var_13 = (unsigned char)147;
unsigned short var_14 = (unsigned short)36239;
unsigned short var_15 = (unsigned short)29802;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
