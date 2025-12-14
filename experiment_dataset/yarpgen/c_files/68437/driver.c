#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -67009991;
short var_3 = (short)22768;
signed char var_4 = (signed char)26;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 8854862960731479279ULL;
unsigned long long int var_13 = 4525172180992102155ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)37255;
signed char var_16 = (signed char)86;
signed char var_17 = (signed char)-87;
short var_18 = (short)-8180;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
