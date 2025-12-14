#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_2 = 4207392573U;
unsigned char var_3 = (unsigned char)2;
unsigned int var_5 = 2106318805U;
unsigned int var_6 = 234019074U;
unsigned char var_12 = (unsigned char)229;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned short var_14 = (unsigned short)32807;
unsigned char var_15 = (unsigned char)111;
signed char var_16 = (signed char)22;
_Bool var_17 = (_Bool)0;
long long int var_18 = -7192354472358985822LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
