#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-50;
unsigned short var_10 = (unsigned short)31101;
short var_14 = (short)24584;
short var_19 = (short)-25549;
int zero = 0;
unsigned long long int var_20 = 16574040218416865690ULL;
unsigned short var_21 = (unsigned short)57666;
unsigned char var_22 = (unsigned char)36;
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
