#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 8030092149556711476ULL;
short var_10 = (short)6592;
int var_11 = 623459205;
signed char var_13 = (signed char)-55;
unsigned short var_15 = (unsigned short)55268;
int var_16 = 30485001;
int zero = 0;
short var_17 = (short)12232;
unsigned long long int var_18 = 9774805464746190160ULL;
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
