#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1114308719918579944LL;
int var_4 = -741626033;
unsigned long long int var_5 = 8132532013331521769ULL;
unsigned int var_9 = 908150779U;
signed char var_12 = (signed char)7;
short var_13 = (short)-12637;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 2998609545U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
