#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14564790665624392307ULL;
_Bool var_1 = (_Bool)0;
unsigned int var_5 = 2273132412U;
_Bool var_8 = (_Bool)1;
unsigned char var_10 = (unsigned char)39;
signed char var_11 = (signed char)-75;
int zero = 0;
unsigned short var_13 = (unsigned short)52072;
unsigned short var_14 = (unsigned short)51501;
unsigned short var_15 = (unsigned short)22096;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
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
