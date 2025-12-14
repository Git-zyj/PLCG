#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)50;
short var_7 = (short)27324;
short var_8 = (short)-13316;
unsigned char var_13 = (unsigned char)132;
signed char var_14 = (signed char)-62;
int var_17 = 353724424;
_Bool var_19 = (_Bool)0;
int zero = 0;
short var_20 = (short)13523;
int var_21 = -945185769;
int var_22 = -1123449587;
_Bool var_23 = (_Bool)1;
short var_24 = (short)-11499;
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
