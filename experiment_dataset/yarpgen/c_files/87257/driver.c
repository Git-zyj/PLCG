#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7015777968445040932ULL;
unsigned char var_4 = (unsigned char)203;
unsigned long long int var_7 = 15167591908532858809ULL;
long long int var_9 = 581626903389771673LL;
signed char var_13 = (signed char)83;
int zero = 0;
unsigned long long int var_16 = 7805507104737531216ULL;
short var_17 = (short)3094;
unsigned long long int var_18 = 5199063897253056211ULL;
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
