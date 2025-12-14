#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-22373;
_Bool var_5 = (_Bool)0;
unsigned long long int var_7 = 17200084441951274594ULL;
int var_9 = -166400960;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned short var_16 = (unsigned short)27902;
signed char var_17 = (signed char)-108;
unsigned long long int var_18 = 18106292407923768775ULL;
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
