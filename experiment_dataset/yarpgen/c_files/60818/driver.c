#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5103985137644505110ULL;
unsigned long long int var_2 = 8454074207908337826ULL;
short var_3 = (short)-25219;
short var_4 = (short)-13272;
int var_5 = -868082922;
short var_6 = (short)-27277;
unsigned long long int var_8 = 14405131731310082415ULL;
unsigned long long int var_9 = 9218448214806265483ULL;
int zero = 0;
unsigned long long int var_10 = 18070842444457149590ULL;
short var_11 = (short)-2461;
unsigned long long int var_12 = 16145253284823863645ULL;
short var_13 = (short)-405;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
