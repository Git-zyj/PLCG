#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_4 = (signed char)-62;
unsigned short var_5 = (unsigned short)37836;
signed char var_6 = (signed char)59;
long long int var_9 = 3837070914957913105LL;
unsigned char var_11 = (unsigned char)166;
int zero = 0;
unsigned char var_19 = (unsigned char)2;
short var_20 = (short)-9279;
unsigned long long int var_21 = 566359382680592578ULL;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
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
