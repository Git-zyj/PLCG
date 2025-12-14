#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)88;
unsigned long long int var_3 = 10797589383471734783ULL;
int var_5 = 1298495647;
unsigned char var_7 = (unsigned char)197;
unsigned long long int var_13 = 9422777223848687132ULL;
int zero = 0;
signed char var_18 = (signed char)12;
int var_19 = 219675947;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
