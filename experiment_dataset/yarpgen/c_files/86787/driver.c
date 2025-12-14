#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-17891;
short var_3 = (short)-12520;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)97;
short var_6 = (short)-5057;
long long int var_8 = -8101455092143758437LL;
short var_11 = (short)-8934;
_Bool var_14 = (_Bool)0;
int var_15 = 1304722926;
int zero = 0;
signed char var_16 = (signed char)-16;
int var_17 = 165929282;
unsigned short var_18 = (unsigned short)29053;
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
