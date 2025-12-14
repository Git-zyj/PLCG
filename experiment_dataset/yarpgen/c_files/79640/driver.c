#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)6;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 9226841725362975629ULL;
int var_5 = 1574983625;
long long int var_6 = -3429827822019612063LL;
int zero = 0;
int var_10 = -260683709;
int var_11 = -982381526;
signed char var_12 = (signed char)117;
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
