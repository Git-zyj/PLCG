#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-10;
unsigned short var_1 = (unsigned short)60288;
unsigned char var_3 = (unsigned char)61;
unsigned int var_5 = 2771024440U;
unsigned short var_6 = (unsigned short)30137;
_Bool var_8 = (_Bool)1;
long long int var_9 = 5193101465712459225LL;
_Bool var_10 = (_Bool)0;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)85;
int zero = 0;
unsigned short var_18 = (unsigned short)61541;
unsigned char var_19 = (unsigned char)124;
unsigned short var_20 = (unsigned short)42918;
unsigned char var_21 = (unsigned char)170;
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
