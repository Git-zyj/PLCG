#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)42336;
unsigned short var_3 = (unsigned short)3577;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)85;
unsigned char var_7 = (unsigned char)20;
_Bool var_9 = (_Bool)1;
unsigned long long int var_11 = 9839865574519823881ULL;
signed char var_13 = (signed char)21;
int zero = 0;
int var_14 = 1770661248;
signed char var_15 = (signed char)-108;
int var_16 = 1690135724;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
