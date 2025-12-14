#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12892100574827865063ULL;
int var_5 = 2062076215;
unsigned long long int var_10 = 9176710466581433044ULL;
signed char var_13 = (signed char)38;
int zero = 0;
short var_14 = (short)13839;
signed char var_15 = (signed char)-126;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
