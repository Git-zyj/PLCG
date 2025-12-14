#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)8419;
unsigned short var_5 = (unsigned short)52678;
_Bool var_7 = (_Bool)1;
int var_11 = -544824459;
unsigned int var_12 = 2855512296U;
unsigned int var_15 = 2857265953U;
int var_16 = -595088579;
int zero = 0;
unsigned long long int var_17 = 13150717411296920326ULL;
signed char var_18 = (signed char)51;
long long int var_19 = 862465592441035149LL;
short var_20 = (short)-3068;
unsigned int var_21 = 816683171U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
