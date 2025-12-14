#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1780969558;
unsigned char var_4 = (unsigned char)138;
signed char var_5 = (signed char)-98;
unsigned long long int var_7 = 18217066732333444995ULL;
unsigned long long int var_9 = 1599471579469533303ULL;
signed char var_11 = (signed char)36;
short var_12 = (short)14536;
int zero = 0;
unsigned char var_16 = (unsigned char)135;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)149;
void init() {
}

void checksum() {
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
