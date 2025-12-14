#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-35;
signed char var_6 = (signed char)-10;
int zero = 0;
signed char var_16 = (signed char)-113;
unsigned int var_17 = 1106149936U;
unsigned char var_18 = (unsigned char)252;
signed char var_19 = (signed char)-48;
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
