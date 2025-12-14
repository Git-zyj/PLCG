#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 12353081073238838845ULL;
long long int var_8 = -1383729949914099049LL;
int var_14 = -348266935;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned char var_18 = (unsigned char)93;
long long int var_19 = -6956374480058047825LL;
int var_20 = 233802067;
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
