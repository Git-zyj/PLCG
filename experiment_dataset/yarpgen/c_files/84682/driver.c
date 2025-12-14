#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)52;
unsigned short var_2 = (unsigned short)9015;
short var_3 = (short)13819;
unsigned int var_5 = 2555491366U;
short var_7 = (short)22026;
signed char var_9 = (signed char)-20;
int zero = 0;
unsigned long long int var_10 = 2590089196814165480ULL;
short var_11 = (short)-29899;
short var_12 = (short)28127;
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
