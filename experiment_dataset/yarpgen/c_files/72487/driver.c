#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3983477456292841660ULL;
unsigned long long int var_1 = 14150248546727164678ULL;
unsigned long long int var_6 = 8055784002109988587ULL;
unsigned long long int var_9 = 4291377458781943692ULL;
unsigned long long int var_10 = 5287322158027552812ULL;
unsigned long long int var_11 = 17822461477230814700ULL;
int zero = 0;
unsigned long long int var_15 = 14778034599701178439ULL;
unsigned long long int var_16 = 5180059465240741051ULL;
unsigned long long int var_17 = 1598858728288553985ULL;
unsigned long long int var_18 = 7819540531739846429ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
