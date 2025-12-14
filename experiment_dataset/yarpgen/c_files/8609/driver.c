#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 504777342U;
_Bool var_3 = (_Bool)1;
_Bool var_6 = (_Bool)1;
unsigned int var_13 = 454627007U;
unsigned long long int var_15 = 4949136106353520514ULL;
int zero = 0;
unsigned long long int var_16 = 568441004825983278ULL;
unsigned int var_17 = 3523786905U;
unsigned int var_18 = 2015860481U;
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
