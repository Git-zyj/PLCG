#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)11744;
unsigned short var_2 = (unsigned short)10041;
signed char var_3 = (signed char)-124;
short var_4 = (short)-18893;
unsigned char var_7 = (unsigned char)204;
long long int var_8 = 3658179676668688028LL;
unsigned char var_9 = (unsigned char)53;
int zero = 0;
short var_10 = (short)-27968;
unsigned long long int var_11 = 14334664023816982942ULL;
unsigned int var_12 = 3692236968U;
short var_13 = (short)-15345;
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
