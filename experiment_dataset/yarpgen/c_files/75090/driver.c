#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2927425237955547610LL;
unsigned long long int var_5 = 1788834581590710830ULL;
int var_6 = 1333870557;
long long int var_7 = -3068651051580974049LL;
int zero = 0;
short var_13 = (short)-6735;
short var_14 = (short)15942;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
