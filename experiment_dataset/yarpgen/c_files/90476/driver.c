#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)97;
unsigned long long int var_1 = 17177997790121264774ULL;
short var_2 = (short)23221;
signed char var_3 = (signed char)-97;
signed char var_5 = (signed char)2;
signed char var_9 = (signed char)82;
unsigned char var_11 = (unsigned char)63;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned long long int var_16 = 14417153954649740990ULL;
int var_17 = 1347805572;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
