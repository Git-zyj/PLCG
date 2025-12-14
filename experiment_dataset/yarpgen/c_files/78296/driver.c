#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-101;
signed char var_3 = (signed char)77;
unsigned short var_4 = (unsigned short)6633;
short var_7 = (short)16986;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)162;
short var_13 = (short)17872;
int zero = 0;
_Bool var_14 = (_Bool)1;
short var_15 = (short)16359;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)16373;
void init() {
}

void checksum() {
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
