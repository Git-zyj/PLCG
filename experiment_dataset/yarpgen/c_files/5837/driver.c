#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)185;
long long int var_10 = -733864762346319933LL;
unsigned short var_11 = (unsigned short)1387;
short var_14 = (short)12961;
short var_16 = (short)8370;
signed char var_18 = (signed char)51;
int zero = 0;
int var_19 = -270579519;
signed char var_20 = (signed char)-102;
unsigned short var_21 = (unsigned short)10297;
void init() {
}

void checksum() {
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
