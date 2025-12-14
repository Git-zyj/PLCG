#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14683506919218685308ULL;
int var_1 = -1624296879;
long long int var_3 = 4618899836743223389LL;
unsigned short var_4 = (unsigned short)18891;
unsigned short var_6 = (unsigned short)35278;
unsigned short var_7 = (unsigned short)28699;
unsigned char var_8 = (unsigned char)144;
int zero = 0;
int var_10 = 124059250;
short var_11 = (short)6266;
signed char var_12 = (signed char)110;
unsigned char var_13 = (unsigned char)184;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
