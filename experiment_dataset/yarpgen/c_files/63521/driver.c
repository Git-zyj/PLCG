#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1492311036;
_Bool var_4 = (_Bool)0;
_Bool var_6 = (_Bool)1;
signed char var_8 = (signed char)-88;
unsigned int var_12 = 94296993U;
short var_17 = (short)7909;
int zero = 0;
unsigned char var_19 = (unsigned char)115;
unsigned short var_20 = (unsigned short)54461;
short var_21 = (short)31891;
void init() {
}

void checksum() {
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
