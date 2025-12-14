#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5703119356983743985LL;
long long int var_6 = 9205799530304915637LL;
unsigned short var_7 = (unsigned short)62107;
short var_11 = (short)-15397;
unsigned char var_13 = (unsigned char)231;
int var_15 = -1169946525;
short var_18 = (short)3887;
int zero = 0;
int var_20 = -43052362;
unsigned short var_21 = (unsigned short)936;
int var_22 = 56362658;
unsigned short var_23 = (unsigned short)59041;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
