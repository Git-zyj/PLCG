#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-18559;
_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)73;
unsigned long long int var_4 = 12534895158845392246ULL;
long long int var_7 = -8329216463442431630LL;
signed char var_9 = (signed char)-102;
int var_10 = 1490514120;
_Bool var_12 = (_Bool)1;
int zero = 0;
signed char var_13 = (signed char)-114;
unsigned int var_14 = 468148502U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
