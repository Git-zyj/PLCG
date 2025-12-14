#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)121;
signed char var_7 = (signed char)19;
unsigned char var_10 = (unsigned char)243;
signed char var_15 = (signed char)-16;
signed char var_17 = (signed char)-49;
signed char var_18 = (signed char)59;
int zero = 0;
unsigned char var_20 = (unsigned char)113;
signed char var_21 = (signed char)-6;
void init() {
}

void checksum() {
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
