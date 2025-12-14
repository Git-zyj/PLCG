#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)6140;
unsigned short var_3 = (unsigned short)32547;
unsigned int var_4 = 3178426164U;
short var_5 = (short)-7051;
unsigned char var_6 = (unsigned char)69;
int var_7 = -2141970078;
long long int var_8 = -1698548601161900049LL;
signed char var_10 = (signed char)-45;
signed char var_11 = (signed char)80;
int zero = 0;
unsigned short var_12 = (unsigned short)48541;
unsigned long long int var_13 = 17755375998183050676ULL;
unsigned int var_14 = 2881916705U;
_Bool var_15 = (_Bool)0;
long long int var_16 = -1533412195265752879LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
