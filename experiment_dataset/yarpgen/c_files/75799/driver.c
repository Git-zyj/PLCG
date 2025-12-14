#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_9 = (short)-2691;
unsigned long long int var_13 = 3785367512715136566ULL;
unsigned char var_16 = (unsigned char)226;
int zero = 0;
unsigned char var_18 = (unsigned char)2;
unsigned char var_19 = (unsigned char)180;
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
