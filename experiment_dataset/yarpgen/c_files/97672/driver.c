#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)22704;
unsigned long long int var_6 = 11180559004034661076ULL;
int var_9 = -737203970;
short var_12 = (short)-6184;
unsigned char var_17 = (unsigned char)116;
int zero = 0;
unsigned int var_18 = 360229117U;
unsigned short var_19 = (unsigned short)3973;
_Bool var_20 = (_Bool)1;
short var_21 = (short)17473;
signed char var_22 = (signed char)-106;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
