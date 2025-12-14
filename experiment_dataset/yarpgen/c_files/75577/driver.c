#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1158197807U;
_Bool var_2 = (_Bool)0;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)108;
unsigned short var_8 = (unsigned short)14950;
unsigned char var_9 = (unsigned char)221;
unsigned short var_10 = (unsigned short)27302;
unsigned short var_11 = (unsigned short)32116;
signed char var_12 = (signed char)10;
unsigned long long int var_14 = 7075657208304791396ULL;
int zero = 0;
long long int var_15 = 3725882159346813103LL;
long long int var_16 = -1458343864010692602LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
