#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 3904060973467892950LL;
int var_7 = -151481798;
int var_10 = 1807607130;
unsigned long long int var_12 = 3362643879595117962ULL;
int var_13 = 1552133148;
int zero = 0;
long long int var_18 = 823635897091309913LL;
unsigned long long int var_19 = 15600338413223373324ULL;
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
