#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 12102258537145143944ULL;
unsigned int var_13 = 3926482337U;
int var_17 = 193846598;
unsigned short var_18 = (unsigned short)24905;
int zero = 0;
unsigned long long int var_20 = 17496348766550159784ULL;
unsigned int var_21 = 4049455800U;
long long int var_22 = -8698927274500009970LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
