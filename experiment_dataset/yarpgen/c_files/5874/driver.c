#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1812271815U;
unsigned char var_1 = (unsigned char)217;
unsigned int var_2 = 3268166504U;
unsigned short var_5 = (unsigned short)49403;
short var_8 = (short)-14036;
short var_11 = (short)25981;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)24873;
unsigned long long int var_16 = 8321444609512672450ULL;
int zero = 0;
signed char var_17 = (signed char)127;
unsigned char var_18 = (unsigned char)113;
int var_19 = 1720199211;
long long int var_20 = -4775238896931681817LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
