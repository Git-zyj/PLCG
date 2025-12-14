#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-9;
unsigned short var_6 = (unsigned short)59813;
unsigned short var_7 = (unsigned short)43315;
signed char var_10 = (signed char)59;
unsigned short var_14 = (unsigned short)24431;
int zero = 0;
signed char var_17 = (signed char)27;
unsigned short var_18 = (unsigned short)2595;
unsigned long long int var_19 = 11381366438425036409ULL;
void init() {
}

void checksum() {
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
