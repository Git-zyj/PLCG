#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-51;
_Bool var_2 = (_Bool)0;
signed char var_4 = (signed char)73;
unsigned char var_6 = (unsigned char)179;
unsigned int var_7 = 2963997782U;
unsigned short var_8 = (unsigned short)9127;
unsigned short var_10 = (unsigned short)56360;
unsigned short var_13 = (unsigned short)45160;
int zero = 0;
unsigned char var_17 = (unsigned char)45;
unsigned int var_18 = 3897132915U;
void init() {
}

void checksum() {
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
