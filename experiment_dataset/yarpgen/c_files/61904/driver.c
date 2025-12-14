#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3988646804827125309ULL;
unsigned char var_3 = (unsigned char)234;
unsigned long long int var_4 = 4430590106337881342ULL;
int zero = 0;
short var_17 = (short)12991;
unsigned char var_18 = (unsigned char)130;
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
