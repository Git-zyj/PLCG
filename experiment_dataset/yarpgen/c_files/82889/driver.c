#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2267756379057069092LL;
long long int var_15 = -3819873186614880739LL;
long long int var_16 = -5484386351832618433LL;
int zero = 0;
short var_18 = (short)6315;
_Bool var_19 = (_Bool)0;
short var_20 = (short)764;
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
