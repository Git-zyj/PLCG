#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 318887864;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 17891622094919555133ULL;
int var_19 = -697557845;
unsigned long long int var_20 = 3308928638931933183ULL;
void init() {
}

void checksum() {
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
