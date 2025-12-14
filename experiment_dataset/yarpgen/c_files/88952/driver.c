#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)192;
unsigned char var_3 = (unsigned char)222;
unsigned long long int var_7 = 9228840939767758568ULL;
unsigned long long int var_9 = 9118520759622952689ULL;
signed char var_14 = (signed char)28;
unsigned long long int var_15 = 10977884436158358740ULL;
int zero = 0;
signed char var_16 = (signed char)49;
signed char var_17 = (signed char)102;
unsigned long long int var_18 = 4649766688213102926ULL;
signed char var_19 = (signed char)-105;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
