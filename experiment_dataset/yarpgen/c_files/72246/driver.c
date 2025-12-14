#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-111;
unsigned short var_3 = (unsigned short)15272;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)-63;
unsigned char var_9 = (unsigned char)181;
unsigned char var_10 = (unsigned char)74;
unsigned int var_12 = 3703559756U;
_Bool var_13 = (_Bool)0;
short var_16 = (short)-7444;
int zero = 0;
unsigned short var_19 = (unsigned short)33317;
long long int var_20 = 3057758023884346219LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
