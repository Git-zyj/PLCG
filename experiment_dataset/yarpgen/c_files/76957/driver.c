#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 686082037;
int var_4 = -1105302609;
unsigned short var_5 = (unsigned short)29261;
unsigned int var_6 = 701956056U;
int var_7 = 1566002583;
short var_8 = (short)-29180;
_Bool var_9 = (_Bool)0;
signed char var_12 = (signed char)-7;
int zero = 0;
signed char var_13 = (signed char)32;
unsigned int var_14 = 2855180591U;
unsigned int var_15 = 460714330U;
unsigned long long int var_16 = 16474946886182274474ULL;
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
