#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1939257268616527729ULL;
unsigned short var_6 = (unsigned short)65244;
_Bool var_7 = (_Bool)1;
signed char var_9 = (signed char)115;
int zero = 0;
short var_15 = (short)7545;
unsigned char var_16 = (unsigned char)202;
unsigned char var_17 = (unsigned char)210;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
