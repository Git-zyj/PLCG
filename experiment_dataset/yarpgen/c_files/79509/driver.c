#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8456;
unsigned short var_2 = (unsigned short)24642;
int var_5 = -2832400;
unsigned char var_7 = (unsigned char)183;
unsigned long long int var_8 = 13075033799618021257ULL;
long long int var_9 = 5188469145487694423LL;
_Bool var_10 = (_Bool)0;
unsigned int var_14 = 2124766856U;
int zero = 0;
short var_18 = (short)26194;
unsigned int var_19 = 800084000U;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)58;
unsigned long long int var_22 = 4287058813674778951ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
