#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-13558;
short var_7 = (short)32065;
int var_16 = -182914382;
int zero = 0;
unsigned long long int var_20 = 5717387781417970831ULL;
unsigned long long int var_21 = 16733972184697457920ULL;
long long int var_22 = 8954723195245604953LL;
unsigned long long int var_23 = 6367110146865532073ULL;
unsigned long long int var_24 = 10499564613040299519ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
