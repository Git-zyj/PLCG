#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)127;
signed char var_4 = (signed char)15;
unsigned char var_5 = (unsigned char)66;
int var_8 = 899771297;
unsigned long long int var_14 = 14321581471058053141ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)28;
unsigned long long int var_17 = 13409382060913910118ULL;
_Bool var_18 = (_Bool)0;
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
