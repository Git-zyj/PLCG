#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 7010701334699803574ULL;
unsigned long long int var_2 = 1784047268434888556ULL;
long long int var_8 = -4458332896698692497LL;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)19468;
int zero = 0;
short var_11 = (short)-5349;
signed char var_12 = (signed char)56;
unsigned int var_13 = 3849386181U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
