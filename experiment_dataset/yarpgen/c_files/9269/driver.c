#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2305151066U;
unsigned char var_7 = (unsigned char)0;
int var_10 = 1676548951;
unsigned char var_15 = (unsigned char)183;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 1525030518816667643ULL;
unsigned short var_18 = (unsigned short)59234;
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
