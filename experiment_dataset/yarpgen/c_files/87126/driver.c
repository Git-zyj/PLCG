#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 7980944166848963003ULL;
unsigned long long int var_7 = 16525603446280128908ULL;
long long int var_10 = -6146868426217481768LL;
int var_13 = -1926894461;
int zero = 0;
long long int var_15 = -3694392716172844421LL;
unsigned long long int var_16 = 16721518008279473139ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
