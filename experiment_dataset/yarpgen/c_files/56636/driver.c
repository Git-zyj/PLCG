#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 552276281;
unsigned short var_4 = (unsigned short)19717;
signed char var_7 = (signed char)-110;
signed char var_9 = (signed char)-8;
unsigned long long int var_10 = 10249475251121606922ULL;
unsigned short var_11 = (unsigned short)63666;
_Bool var_13 = (_Bool)1;
unsigned int var_15 = 3984809880U;
unsigned long long int var_16 = 12251386596672686808ULL;
int zero = 0;
unsigned long long int var_17 = 894944707428171164ULL;
signed char var_18 = (signed char)65;
unsigned int var_19 = 2433815758U;
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
