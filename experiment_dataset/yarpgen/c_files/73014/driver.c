#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8423438941786308782ULL;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)1;
int var_7 = -1478433602;
int var_11 = 1853889834;
int zero = 0;
unsigned int var_13 = 296193807U;
long long int var_14 = 1119721382420821798LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
