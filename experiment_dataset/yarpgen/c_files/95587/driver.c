#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1179214730;
int var_5 = -1785021826;
unsigned short var_7 = (unsigned short)27944;
signed char var_8 = (signed char)61;
int zero = 0;
signed char var_17 = (signed char)84;
unsigned long long int var_18 = 7234918078342206283ULL;
void init() {
}

void checksum() {
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
