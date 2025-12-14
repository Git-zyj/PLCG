#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)86;
unsigned int var_1 = 3191598095U;
unsigned short var_4 = (unsigned short)27653;
unsigned short var_5 = (unsigned short)43662;
short var_6 = (short)31505;
short var_13 = (short)-26148;
int zero = 0;
unsigned long long int var_17 = 11862866177397256418ULL;
unsigned long long int var_18 = 14381773275691810019ULL;
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
