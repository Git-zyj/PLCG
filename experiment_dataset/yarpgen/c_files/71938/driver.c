#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)118;
unsigned long long int var_2 = 5772206863378039724ULL;
short var_4 = (short)18742;
unsigned char var_11 = (unsigned char)0;
unsigned long long int var_13 = 11574226153471135304ULL;
unsigned char var_15 = (unsigned char)60;
_Bool var_17 = (_Bool)1;
int zero = 0;
short var_18 = (short)4217;
unsigned char var_19 = (unsigned char)87;
unsigned long long int var_20 = 9074587203140277606ULL;
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
