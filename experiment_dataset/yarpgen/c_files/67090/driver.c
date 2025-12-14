#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5609100925528600491LL;
unsigned long long int var_5 = 11666749142480303134ULL;
int var_6 = 796968284;
signed char var_8 = (signed char)-28;
long long int var_9 = -8611891179835811861LL;
unsigned char var_11 = (unsigned char)185;
int zero = 0;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-3668;
unsigned short var_14 = (unsigned short)7084;
unsigned char var_15 = (unsigned char)92;
unsigned int var_16 = 3389335513U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
