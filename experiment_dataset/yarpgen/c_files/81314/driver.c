#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)53;
short var_2 = (short)19077;
_Bool var_6 = (_Bool)0;
short var_9 = (short)28220;
short var_10 = (short)-25324;
signed char var_13 = (signed char)-22;
unsigned char var_14 = (unsigned char)59;
signed char var_15 = (signed char)-55;
int zero = 0;
int var_16 = 1276991369;
signed char var_17 = (signed char)81;
signed char var_18 = (signed char)-107;
short var_19 = (short)-14799;
void init() {
}

void checksum() {
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
