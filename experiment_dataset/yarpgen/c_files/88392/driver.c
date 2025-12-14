#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_10 = 10628541393112250859ULL;
unsigned char var_11 = (unsigned char)90;
unsigned char var_16 = (unsigned char)59;
int zero = 0;
long long int var_18 = 7835256316828911991LL;
int var_19 = -1548891318;
short var_20 = (short)-10753;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
