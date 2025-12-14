#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)115;
unsigned int var_3 = 3947727585U;
unsigned char var_5 = (unsigned char)228;
unsigned short var_8 = (unsigned short)14493;
long long int var_9 = -2662971653293521410LL;
long long int var_10 = -389563211506535876LL;
int var_11 = -345523993;
unsigned int var_12 = 3227675920U;
unsigned short var_16 = (unsigned short)59223;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned int var_18 = 3464450789U;
unsigned int var_19 = 300647558U;
unsigned int var_20 = 2730787677U;
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
