#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4138;
unsigned short var_1 = (unsigned short)37375;
int var_2 = -1948000067;
unsigned short var_5 = (unsigned short)53952;
short var_7 = (short)9917;
short var_8 = (short)26026;
unsigned int var_11 = 867594999U;
unsigned short var_17 = (unsigned short)49001;
short var_18 = (short)-4190;
int zero = 0;
short var_19 = (short)-6998;
int var_20 = -1030190838;
short var_21 = (short)-738;
short var_22 = (short)-23322;
unsigned short var_23 = (unsigned short)23725;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
