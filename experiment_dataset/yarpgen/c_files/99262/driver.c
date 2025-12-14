#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3348267804U;
int var_2 = 863688005;
short var_3 = (short)-13461;
short var_4 = (short)-30591;
signed char var_5 = (signed char)35;
unsigned short var_10 = (unsigned short)22834;
unsigned short var_12 = (unsigned short)10548;
short var_14 = (short)9523;
int zero = 0;
signed char var_16 = (signed char)102;
long long int var_17 = 2614190152442060016LL;
signed char var_18 = (signed char)109;
unsigned short var_19 = (unsigned short)53749;
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
