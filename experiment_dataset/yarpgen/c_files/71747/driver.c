#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 2067783046;
unsigned short var_7 = (unsigned short)17326;
int var_8 = 525092627;
int zero = 0;
long long int var_10 = 3882497388359652412LL;
unsigned char var_11 = (unsigned char)204;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
