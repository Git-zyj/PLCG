#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)0;
signed char var_3 = (signed char)93;
_Bool var_5 = (_Bool)1;
unsigned short var_8 = (unsigned short)57647;
unsigned short var_10 = (unsigned short)52792;
unsigned char var_11 = (unsigned char)157;
_Bool var_13 = (_Bool)1;
unsigned char var_15 = (unsigned char)71;
int zero = 0;
signed char var_16 = (signed char)79;
signed char var_17 = (signed char)-86;
unsigned short var_18 = (unsigned short)62435;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
