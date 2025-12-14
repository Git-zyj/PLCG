#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-63;
unsigned int var_1 = 83101316U;
short var_3 = (short)22048;
short var_4 = (short)-23202;
long long int var_5 = 4719609862254417326LL;
unsigned char var_8 = (unsigned char)197;
unsigned char var_10 = (unsigned char)117;
int zero = 0;
unsigned int var_11 = 3873401050U;
unsigned short var_12 = (unsigned short)16996;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
