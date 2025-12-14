#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1994449152;
long long int var_3 = -6949633650338534208LL;
unsigned char var_6 = (unsigned char)190;
unsigned short var_7 = (unsigned short)50634;
_Bool var_9 = (_Bool)0;
long long int var_11 = -1427853791851332054LL;
long long int var_15 = 8023448195912988038LL;
signed char var_16 = (signed char)32;
int zero = 0;
unsigned short var_17 = (unsigned short)8160;
short var_18 = (short)25108;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
