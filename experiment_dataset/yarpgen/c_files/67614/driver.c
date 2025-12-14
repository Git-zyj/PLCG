#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15870075949183741999ULL;
signed char var_2 = (signed char)-123;
unsigned char var_4 = (unsigned char)182;
unsigned char var_7 = (unsigned char)28;
unsigned short var_8 = (unsigned short)26384;
int var_9 = 54164097;
unsigned char var_11 = (unsigned char)8;
unsigned char var_13 = (unsigned char)232;
int zero = 0;
unsigned long long int var_14 = 775582232223034423ULL;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)238;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
