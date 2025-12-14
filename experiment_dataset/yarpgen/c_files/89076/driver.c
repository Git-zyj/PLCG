#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)195;
_Bool var_3 = (_Bool)0;
long long int var_5 = -5006112911657098816LL;
signed char var_7 = (signed char)20;
short var_10 = (short)-14233;
short var_12 = (short)22613;
signed char var_13 = (signed char)70;
unsigned char var_15 = (unsigned char)111;
unsigned short var_17 = (unsigned short)12880;
int zero = 0;
unsigned short var_18 = (unsigned short)48477;
short var_19 = (short)25902;
unsigned char var_20 = (unsigned char)206;
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
