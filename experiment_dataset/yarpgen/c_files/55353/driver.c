#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-56;
unsigned char var_5 = (unsigned char)203;
unsigned int var_10 = 3524323875U;
unsigned short var_13 = (unsigned short)64171;
int zero = 0;
unsigned short var_18 = (unsigned short)4358;
unsigned long long int var_19 = 3148912870590383581ULL;
void init() {
}

void checksum() {
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
