#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-29814;
int var_4 = 1853233974;
short var_6 = (short)17628;
int zero = 0;
int var_10 = 516145791;
long long int var_11 = -7971609672982966239LL;
unsigned short var_12 = (unsigned short)4672;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
