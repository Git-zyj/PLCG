#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 815944681463197312ULL;
short var_1 = (short)21331;
unsigned int var_2 = 1358990094U;
short var_3 = (short)-2369;
_Bool var_4 = (_Bool)1;
unsigned long long int var_6 = 6082152714947772139ULL;
unsigned long long int var_7 = 6274355261421494419ULL;
unsigned short var_8 = (unsigned short)27446;
unsigned int var_9 = 184780536U;
int zero = 0;
unsigned long long int var_10 = 6260191993662956105ULL;
short var_11 = (short)-28262;
unsigned long long int var_12 = 2351186929298082876ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
