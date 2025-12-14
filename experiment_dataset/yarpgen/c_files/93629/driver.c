#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13597734638598060324ULL;
short var_7 = (short)-4520;
unsigned char var_10 = (unsigned char)205;
unsigned int var_13 = 237216774U;
signed char var_15 = (signed char)-75;
long long int var_16 = 8400204345914440015LL;
unsigned long long int var_17 = 7081216256515188700ULL;
int zero = 0;
unsigned int var_18 = 3088022693U;
unsigned short var_19 = (unsigned short)46994;
short var_20 = (short)15486;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
