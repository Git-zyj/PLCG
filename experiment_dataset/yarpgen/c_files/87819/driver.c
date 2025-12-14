#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)8;
int var_4 = -1481935593;
int var_5 = -1000584613;
signed char var_8 = (signed char)3;
unsigned short var_9 = (unsigned short)33668;
unsigned int var_11 = 3282131489U;
unsigned char var_17 = (unsigned char)253;
int zero = 0;
unsigned short var_18 = (unsigned short)43713;
signed char var_19 = (signed char)-48;
_Bool var_20 = (_Bool)0;
long long int var_21 = -376508001623763269LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
