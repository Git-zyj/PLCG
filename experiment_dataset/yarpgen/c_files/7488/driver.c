#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 13103284381675482206ULL;
unsigned char var_5 = (unsigned char)50;
long long int var_7 = 6247333565289035292LL;
unsigned int var_8 = 1042308282U;
int zero = 0;
unsigned long long int var_13 = 8888692316605913911ULL;
unsigned short var_14 = (unsigned short)40818;
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
