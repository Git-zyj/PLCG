#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -3258736344554012359LL;
_Bool var_13 = (_Bool)1;
unsigned char var_16 = (unsigned char)81;
unsigned int var_17 = 377332714U;
unsigned short var_18 = (unsigned short)52153;
int zero = 0;
unsigned int var_20 = 4010167405U;
unsigned short var_21 = (unsigned short)23995;
unsigned int var_22 = 596097519U;
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
