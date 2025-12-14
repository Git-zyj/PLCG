#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 6713705147122593026LL;
short var_4 = (short)-393;
long long int var_7 = -4921552783308745851LL;
short var_14 = (short)3586;
long long int var_15 = -5530031406431796013LL;
int zero = 0;
signed char var_18 = (signed char)-5;
_Bool var_19 = (_Bool)0;
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
