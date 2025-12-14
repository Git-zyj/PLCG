#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 79129882;
unsigned short var_1 = (unsigned short)44862;
unsigned short var_2 = (unsigned short)8169;
short var_3 = (short)6372;
long long int var_4 = -6120801968230458214LL;
signed char var_5 = (signed char)9;
unsigned long long int var_6 = 4312598556191194015ULL;
int var_7 = -1808598122;
unsigned char var_8 = (unsigned char)225;
unsigned short var_10 = (unsigned short)39725;
int zero = 0;
int var_13 = 992346089;
short var_14 = (short)-9766;
signed char var_15 = (signed char)-67;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
