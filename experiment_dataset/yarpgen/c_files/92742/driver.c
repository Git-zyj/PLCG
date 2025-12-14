#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-122;
short var_3 = (short)-22389;
_Bool var_6 = (_Bool)1;
int var_7 = 1146855364;
unsigned char var_13 = (unsigned char)44;
unsigned long long int var_18 = 17538337058403924078ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)38882;
unsigned long long int var_21 = 4348431217843206010ULL;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)4822;
unsigned char var_24 = (unsigned char)201;
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
