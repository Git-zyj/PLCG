#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)62187;
int var_2 = -2004422799;
unsigned char var_6 = (unsigned char)19;
unsigned short var_8 = (unsigned short)20989;
short var_10 = (short)-18440;
unsigned char var_13 = (unsigned char)189;
long long int var_14 = 6858897654757956226LL;
int zero = 0;
unsigned char var_15 = (unsigned char)124;
unsigned short var_16 = (unsigned short)10089;
unsigned int var_17 = 485871209U;
signed char var_18 = (signed char)73;
long long int var_19 = -2648333140365621509LL;
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
