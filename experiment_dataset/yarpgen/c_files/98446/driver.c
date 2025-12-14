#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)28627;
unsigned char var_19 = (unsigned char)5;
int zero = 0;
unsigned long long int var_20 = 6958195777013219590ULL;
unsigned short var_21 = (unsigned short)35435;
short var_22 = (short)1581;
unsigned long long int var_23 = 4802453579124334497ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
