#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-66;
int var_2 = 708352528;
unsigned int var_3 = 3365521205U;
int zero = 0;
int var_16 = 1858404937;
_Bool var_17 = (_Bool)0;
long long int var_18 = -7383945340441699042LL;
unsigned short var_19 = (unsigned short)19402;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
