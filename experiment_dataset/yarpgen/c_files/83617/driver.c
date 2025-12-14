#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7115447037845227456ULL;
short var_11 = (short)-29527;
unsigned long long int var_12 = 12749720867617631576ULL;
unsigned short var_16 = (unsigned short)20106;
int zero = 0;
unsigned long long int var_18 = 11451743561409771691ULL;
short var_19 = (short)16795;
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
