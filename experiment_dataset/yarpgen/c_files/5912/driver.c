#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 4657896524792005336ULL;
unsigned long long int var_6 = 9832885832967053164ULL;
signed char var_8 = (signed char)(-127 - 1);
int zero = 0;
long long int var_10 = 2585687276945383070LL;
short var_11 = (short)9711;
long long int var_12 = -175752160082059395LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
