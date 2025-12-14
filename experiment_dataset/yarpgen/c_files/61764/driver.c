#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)23471;
signed char var_6 = (signed char)39;
unsigned char var_8 = (unsigned char)232;
unsigned char var_12 = (unsigned char)236;
long long int var_13 = 9026167282106632099LL;
unsigned short var_14 = (unsigned short)48854;
unsigned short var_15 = (unsigned short)41677;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 11685383634591156064ULL;
short var_18 = (short)19538;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)81;
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
