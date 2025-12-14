#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)251;
long long int var_3 = 4169184262689872292LL;
int var_4 = -1882881392;
short var_7 = (short)-22570;
unsigned int var_12 = 3950463962U;
int zero = 0;
signed char var_13 = (signed char)-83;
signed char var_14 = (signed char)83;
short var_15 = (short)-20721;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
