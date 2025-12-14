#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-7523;
signed char var_3 = (signed char)104;
unsigned int var_4 = 1001824657U;
unsigned short var_6 = (unsigned short)11598;
int var_7 = 1122393249;
unsigned long long int var_8 = 11126649707423035063ULL;
unsigned int var_9 = 2660176809U;
short var_10 = (short)2723;
int var_12 = 1808073678;
unsigned long long int var_15 = 16494781057248372207ULL;
unsigned long long int var_16 = 3110305842920986854ULL;
int zero = 0;
unsigned long long int var_19 = 9540504732427981345ULL;
unsigned int var_20 = 437590044U;
int var_21 = -1448995502;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
