#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)50;
unsigned char var_3 = (unsigned char)144;
unsigned short var_4 = (unsigned short)51161;
long long int var_6 = 5302541779269449549LL;
signed char var_7 = (signed char)-123;
signed char var_8 = (signed char)72;
long long int var_9 = 1975749675167917915LL;
unsigned short var_10 = (unsigned short)9983;
short var_11 = (short)-20715;
short var_12 = (short)32439;
int var_13 = -1448449734;
signed char var_14 = (signed char)-117;
int zero = 0;
signed char var_15 = (signed char)53;
int var_16 = -186655895;
signed char var_17 = (signed char)75;
signed char var_18 = (signed char)90;
long long int var_19 = 6646674773852967114LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
