#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -901266246;
short var_7 = (short)-6703;
unsigned long long int var_9 = 16664451701791549186ULL;
_Bool var_11 = (_Bool)1;
unsigned short var_14 = (unsigned short)53012;
_Bool var_15 = (_Bool)0;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned short var_19 = (unsigned short)52446;
unsigned char var_20 = (unsigned char)102;
long long int var_21 = -4920923222424433842LL;
signed char var_22 = (signed char)74;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
