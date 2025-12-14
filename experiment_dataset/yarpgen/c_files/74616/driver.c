#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)17664;
unsigned short var_5 = (unsigned short)45256;
long long int var_6 = 3231427984201194134LL;
unsigned char var_7 = (unsigned char)211;
_Bool var_10 = (_Bool)1;
unsigned long long int var_13 = 13086188988401115574ULL;
unsigned int var_15 = 3228990788U;
int zero = 0;
unsigned short var_20 = (unsigned short)61028;
_Bool var_21 = (_Bool)1;
int var_22 = -293443940;
unsigned char var_23 = (unsigned char)41;
int var_24 = 132570876;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
