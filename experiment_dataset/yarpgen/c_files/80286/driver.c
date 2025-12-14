#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 11189060264470049351ULL;
unsigned int var_10 = 3024780149U;
unsigned short var_14 = (unsigned short)60912;
signed char var_15 = (signed char)-60;
short var_16 = (short)23149;
unsigned char var_19 = (unsigned char)171;
int zero = 0;
short var_20 = (short)-10087;
int var_21 = -675869841;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
