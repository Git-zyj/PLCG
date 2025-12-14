#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-9;
unsigned int var_1 = 3496022055U;
signed char var_4 = (signed char)110;
int var_5 = -1096452554;
unsigned short var_7 = (unsigned short)48;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-112;
unsigned int var_18 = 1697559401U;
int var_19 = 702398552;
int zero = 0;
short var_20 = (short)-3059;
unsigned char var_21 = (unsigned char)248;
_Bool var_22 = (_Bool)0;
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
