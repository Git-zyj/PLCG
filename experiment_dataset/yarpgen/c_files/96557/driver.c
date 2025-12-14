#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)3692;
unsigned short var_7 = (unsigned short)28671;
long long int var_8 = -5242458522303815386LL;
unsigned char var_9 = (unsigned char)184;
unsigned char var_11 = (unsigned char)193;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-24;
int zero = 0;
unsigned char var_15 = (unsigned char)95;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)60144;
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
