#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11333;
unsigned short var_4 = (unsigned short)15060;
long long int var_5 = -6338151350088368180LL;
unsigned short var_7 = (unsigned short)26941;
int var_11 = 527478964;
long long int var_14 = -6467319371930699343LL;
unsigned short var_15 = (unsigned short)14849;
unsigned short var_16 = (unsigned short)20377;
unsigned short var_17 = (unsigned short)32211;
int zero = 0;
unsigned short var_18 = (unsigned short)48264;
int var_19 = 1235716056;
int var_20 = 1132729546;
int var_21 = -2085272360;
unsigned short var_22 = (unsigned short)48063;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
