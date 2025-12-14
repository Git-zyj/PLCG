#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -4682207302782054653LL;
_Bool var_5 = (_Bool)1;
_Bool var_9 = (_Bool)1;
long long int var_10 = -4805239701074702264LL;
unsigned short var_12 = (unsigned short)26622;
unsigned char var_15 = (unsigned char)210;
unsigned short var_16 = (unsigned short)26327;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 2953583288U;
unsigned short var_20 = (unsigned short)8875;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
