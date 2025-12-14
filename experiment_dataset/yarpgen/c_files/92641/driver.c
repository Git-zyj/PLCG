#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 786933075199196562LL;
unsigned short var_5 = (unsigned short)60546;
long long int var_6 = 4231364053286185581LL;
_Bool var_8 = (_Bool)0;
short var_10 = (short)24343;
signed char var_13 = (signed char)-108;
unsigned char var_15 = (unsigned char)179;
unsigned int var_16 = 2055525113U;
unsigned long long int var_17 = 8010111454536786987ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)47023;
unsigned char var_21 = (unsigned char)44;
int var_22 = 611349069;
long long int var_23 = 877320474077527351LL;
short var_24 = (short)-4183;
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
