#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-40;
unsigned char var_5 = (unsigned char)159;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned long long int var_17 = 9001515418376957187ULL;
int var_18 = -444455541;
unsigned long long int var_19 = 2754547161245926875ULL;
long long int var_20 = -4196718569160294352LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
