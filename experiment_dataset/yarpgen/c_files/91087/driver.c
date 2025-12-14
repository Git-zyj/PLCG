#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)30860;
long long int var_1 = 695201209544487620LL;
unsigned long long int var_2 = 1395342287210856387ULL;
_Bool var_3 = (_Bool)1;
unsigned char var_5 = (unsigned char)68;
long long int var_8 = -2212711653001681919LL;
unsigned short var_9 = (unsigned short)52326;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-1181;
unsigned short var_12 = (unsigned short)24043;
int zero = 0;
signed char var_13 = (signed char)119;
signed char var_14 = (signed char)117;
short var_15 = (short)-4624;
unsigned char var_16 = (unsigned char)41;
signed char var_17 = (signed char)-119;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
