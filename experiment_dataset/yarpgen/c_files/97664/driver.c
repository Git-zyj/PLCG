#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)52970;
short var_7 = (short)-5917;
unsigned char var_10 = (unsigned char)240;
signed char var_16 = (signed char)-90;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 7282539648093206361ULL;
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
