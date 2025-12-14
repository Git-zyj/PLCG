#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -47231120555661148LL;
long long int var_5 = -2035458421063503522LL;
short var_6 = (short)20815;
short var_7 = (short)-1979;
unsigned int var_8 = 2429947392U;
short var_9 = (short)30632;
int zero = 0;
short var_11 = (short)-21885;
int var_12 = -640043829;
unsigned long long int var_13 = 10300853905027469366ULL;
void init() {
}

void checksum() {
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
