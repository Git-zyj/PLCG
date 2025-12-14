#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12355;
unsigned long long int var_3 = 3593205430714281731ULL;
_Bool var_5 = (_Bool)0;
short var_8 = (short)-31894;
int var_9 = -2037774679;
signed char var_10 = (signed char)-105;
signed char var_14 = (signed char)-125;
int zero = 0;
int var_15 = -46327649;
short var_16 = (short)7908;
void init() {
}

void checksum() {
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
