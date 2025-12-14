#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)24177;
_Bool var_2 = (_Bool)1;
short var_4 = (short)14520;
short var_5 = (short)-31080;
int var_6 = 1145432828;
_Bool var_7 = (_Bool)1;
long long int var_9 = 6032709062674158819LL;
signed char var_11 = (signed char)97;
signed char var_12 = (signed char)122;
long long int var_14 = 8991594373988251174LL;
long long int var_15 = 1700096281093145935LL;
int zero = 0;
long long int var_16 = 6903426273176730253LL;
unsigned short var_17 = (unsigned short)1956;
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
