#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 440328729353048595ULL;
unsigned char var_4 = (unsigned char)194;
unsigned char var_6 = (unsigned char)94;
signed char var_9 = (signed char)-35;
long long int var_10 = -3160136546431301892LL;
_Bool var_12 = (_Bool)0;
int zero = 0;
short var_15 = (short)-8453;
unsigned short var_16 = (unsigned short)45537;
unsigned char var_17 = (unsigned char)218;
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
