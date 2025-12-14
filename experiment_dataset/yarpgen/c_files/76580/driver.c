#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3369;
unsigned short var_1 = (unsigned short)39737;
unsigned long long int var_2 = 1408487137920862894ULL;
long long int var_3 = -4122198392598380326LL;
short var_4 = (short)-29337;
short var_5 = (short)-18527;
int var_6 = 1516094432;
unsigned short var_7 = (unsigned short)6677;
unsigned int var_9 = 474710872U;
int zero = 0;
unsigned short var_10 = (unsigned short)16392;
short var_11 = (short)31396;
unsigned short var_12 = (unsigned short)1383;
signed char var_13 = (signed char)-14;
unsigned char var_14 = (unsigned char)18;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
