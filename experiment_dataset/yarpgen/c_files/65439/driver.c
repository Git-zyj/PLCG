#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1241117282;
unsigned short var_3 = (unsigned short)55601;
unsigned int var_5 = 171247505U;
unsigned int var_15 = 3376877751U;
int zero = 0;
long long int var_18 = 5928992864681357644LL;
int var_19 = -1588416615;
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
