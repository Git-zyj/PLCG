#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1118689185U;
unsigned long long int var_2 = 17454537732418411620ULL;
unsigned long long int var_3 = 1154322432106944881ULL;
unsigned long long int var_5 = 5122917808151968819ULL;
unsigned int var_6 = 1649693986U;
unsigned long long int var_8 = 10964223562591263665ULL;
unsigned long long int var_9 = 14912390404289169876ULL;
int zero = 0;
unsigned int var_10 = 3975135949U;
unsigned long long int var_11 = 11793888858556038215ULL;
unsigned int var_12 = 3046978560U;
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
