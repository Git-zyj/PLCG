#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11795197808093669189ULL;
unsigned long long int var_10 = 4586082799856132701ULL;
int zero = 0;
unsigned long long int var_16 = 8680417044681698955ULL;
unsigned int var_17 = 2978045317U;
unsigned long long int var_18 = 1610883247452219141ULL;
void init() {
}

void checksum() {
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
