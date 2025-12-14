#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5363155964079278556LL;
unsigned short var_1 = (unsigned short)4616;
signed char var_7 = (signed char)80;
unsigned char var_9 = (unsigned char)16;
long long int var_10 = -8081900290910221552LL;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned short var_12 = (unsigned short)11518;
short var_13 = (short)-3892;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
