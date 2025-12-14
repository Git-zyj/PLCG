#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27992;
long long int var_1 = 2169832347381840018LL;
signed char var_3 = (signed char)-31;
unsigned long long int var_6 = 17423490877903910916ULL;
unsigned int var_8 = 2261002271U;
short var_9 = (short)7107;
int var_10 = 1610493779;
int zero = 0;
short var_11 = (short)-28527;
signed char var_12 = (signed char)-56;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
