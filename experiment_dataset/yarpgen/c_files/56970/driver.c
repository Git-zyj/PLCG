#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-9;
unsigned short var_2 = (unsigned short)43501;
unsigned short var_3 = (unsigned short)40954;
signed char var_6 = (signed char)45;
unsigned long long int var_7 = 2759512637729027064ULL;
long long int var_9 = 5758716785817230013LL;
unsigned long long int var_11 = 10164738829087010431ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)154;
short var_14 = (short)3875;
signed char var_15 = (signed char)79;
long long int var_16 = 3877145890502110594LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
