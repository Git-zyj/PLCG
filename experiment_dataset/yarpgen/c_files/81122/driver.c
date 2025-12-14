#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-22033;
short var_6 = (short)-24268;
signed char var_7 = (signed char)-32;
short var_18 = (short)-21638;
int zero = 0;
long long int var_20 = 4084767247441182509LL;
short var_21 = (short)13025;
int var_22 = 1884444836;
long long int var_23 = -7944429652311420818LL;
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
