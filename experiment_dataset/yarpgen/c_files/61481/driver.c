#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 2481619586391016698LL;
signed char var_9 = (signed char)-115;
unsigned long long int var_12 = 8051992161119782399ULL;
unsigned short var_15 = (unsigned short)40069;
int zero = 0;
unsigned int var_19 = 3326960598U;
short var_20 = (short)11230;
unsigned int var_21 = 1556889403U;
unsigned int var_22 = 2640661230U;
unsigned int var_23 = 2045724065U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
