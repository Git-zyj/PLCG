#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)18608;
long long int var_4 = 4904962013160395007LL;
unsigned int var_8 = 1853473113U;
signed char var_12 = (signed char)-123;
short var_14 = (short)-6072;
unsigned short var_16 = (unsigned short)45201;
signed char var_17 = (signed char)-86;
int zero = 0;
unsigned char var_18 = (unsigned char)22;
unsigned int var_19 = 3804240858U;
signed char var_20 = (signed char)63;
unsigned long long int var_21 = 11606180973168322336ULL;
short var_22 = (short)16329;
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
