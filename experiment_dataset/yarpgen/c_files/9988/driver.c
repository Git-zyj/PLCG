#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)177;
unsigned long long int var_8 = 1511780914760254435ULL;
signed char var_9 = (signed char)59;
unsigned char var_10 = (unsigned char)143;
_Bool var_12 = (_Bool)0;
int zero = 0;
signed char var_14 = (signed char)-63;
short var_15 = (short)15691;
unsigned short var_16 = (unsigned short)40545;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)223;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
